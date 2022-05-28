#include <iostream>
#include <string.h>
#include <fstream>
using namespace std;

void readFile(fstream &fin, char s[])
{
    fin.open("bt12.inp.txt", ios::in);
    if (fin.fail()) return;

    int i = 0;
    while (!fin.eof())
    {
        fin >> s[i++];
    }
}

void Swap(char &x, char &y)
{
    char tmp = x;
    x = y;
    y = tmp;
}

void Sort(char s[])
{
    for (int i = 0; i < strlen(s) - 1; i++)
    {
        for (int j = i + 1; j < strlen(s); j++)
        {
            if (s[i] > s[j])
                Swap(s[i], s[j]);
        }
    }
}

void createArr(char s[], int a[])
{
    Sort(s);
    int j = 0, cnt = 1;
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i + 1] == s[i])
            cnt++;
        else
        {
            a[j++] = cnt;
            cnt = 1;
        }
    }
}

void writeFile(fstream &fout, char s[], int a[])
{
    fout.open("bt12.out.txt", ios::out);
    if (fout.fail())    return;

    createArr(s, a);
    int j = 0;
    for (int i = 0; i < strlen(s); i += a[j++])
        fout << s[i] << " " << a[j] << " ";
}

int main()
{
    fstream fin, fout;
    char s[100];
    int a[100];
    readFile(fin, s);
    writeFile(fout, s, a);
    fin.close();
    fout.close();
    return 0;
}