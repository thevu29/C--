#include <iostream>
#include <string.h>
using namespace std;

int Count(char s[])
{
    int n = 1;
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] == ' ')
            n++;
    }
    return n;
}

void Split(char s[], string str[])
{
    char *p;
    p = strtok(s, " ");
    int i = 0;
    while (p != NULL)
    {
        str[i++] = p;
        p = strtok(NULL, " ");
    }
}

void Swap(string &s1, string &s2)
{
    string tmp = s1;
    s1 = s2;
    s2 = tmp;
}

void Sort(string str[], int n)
{
    char tmp[10];
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (str[i] > str[j])
                Swap(str[i], str[j]);
        }
    }
}

void Output(string str[], int n)
{
    for (int i = 0; i < n; i++)
        cout << str[i] << " ";
}

int main()
{
    char s[200];
    string str[100];
    cout << "Nhap chuoi s: ";
    cin.getline(s, 200);
    int n = Count(s);
    Split(s, str);
    Sort(str, n);
    Output(str, n);
    return 0;
}