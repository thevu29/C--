#include <iostream>
#include <fstream>
using namespace std;

void ReadFile(fstream &fin, int &n, int a[][100])
{
    fin.open("bt35.inp.txt", ios::in);
    if (fin.fail()) return;

    fin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            fin >> a[i][j];
        }
    }
}

void Convert(int a[][100], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            a[i][j] = 0;
        }
    }
}

void WriteFile(fstream &fout, int a[][100], int n)
{
    Convert(a, n);
    fout.open("bt35.out.txt", ios::out);
    if (fout.fail())    return;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            fout << a[i][j] << " ";
        }
        fout << endl;
    }
}

int main()
{
    fstream fin, fout;
    int n, a[100][100];
    ReadFile(fin, n, a);
    WriteFile(fout, a, n);
    fin.close();
    fout.close();
    return 0;
}