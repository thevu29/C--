#include <iostream>
#include <fstream>
#include <algorithm>
using namespace std;

void readFile(fstream &fin, int a[][100], int &n)
{
    fin.open("bt5.inp.txt", ios::in);
    if(!fin)    return;

    fin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            fin >> a[i][j];
    }
}

void Sort(int a[][100], int n)
{   
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                if (a[i][j] > a[i][k])
                    swap(a[i][j], a[i][k]);
            }
        }
    }
}   

void writeFile(fstream &fout, int a[][100], int n)
{
    fout.open("bt5.out.txt", ios::out);
    if(!fout)   return;

    Sort(a, n);
    int b[50];

    for (int i = 0; i < n; i++)
    {
        b[i] = a[i][n / 2];
    }

    sort(b, b + n);
    fout << b[n / 2];
}

int main()
{
    fstream fin, fout;
    int n, a[100][100];
    readFile(fin, a, n);
    writeFile(fout, a, n);
    fin.close();
    fout.close();
    return 0;
}