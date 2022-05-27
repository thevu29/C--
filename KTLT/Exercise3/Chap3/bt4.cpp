#include <iostream>
#include <math.h>
#include <fstream>
using namespace std;

void readFile(fstream &fin, int a[][100], int &n, int &m)
{
    fin.open("inp4.txt", ios::in);
    if(!fin)  return;

    fin >> n;
    fin >> m;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            fin >> a[i][j]; 
    }
}

int Max(int a[][100], int n, int m)
{
    int max = a[0][0];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i][j] > max)
                max = a[i][j];
        }
    }
    return max;
}

int SecondMax(int a[][100], int n, int m)
{
    int second = a[0][0], max  = Max(a, n, m);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i][j] > second && a[i][j] < max)
                second = a[i][j];
        }
    }
    return second;
}

int countSecond(int a[][100], int n, int m)
{
    int cnt = 0, second = SecondMax(a, n, m);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i][j] == second)
                cnt++;
        }
    }
    return cnt;
}

int Prime(int n)
{
    if (n < 2)
        return 0;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

void createB(int a[][100], int b[][100], int n, int m)
{
    int cnt;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cnt = 0;
            
            if (Prime(a[i - 1][j - 1]))
                cnt++;
            if (Prime(a[i - 1][j]))
                cnt++;
            if (Prime(a[i - 1][j + 1]))
                cnt++;
            if (Prime(a[i][j - 1]))
                cnt++;
            if (Prime(a[i][j + 1]))
                cnt++;
            if (Prime(a[i + 1][j - 1]))
                cnt++;
            if (Prime(a[i + 1][j]))
                cnt++;
            if (Prime(a[i + 1][j + 1]))
                cnt++;
            
            b[i][j] = cnt;
        }
    }
}

int countB(int b[][100], int n, int m)
{
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (b[i][j] >= 4)
                cnt++;
        }
    }
    return cnt;
}

void writeFile(fstream &fout, int a[][100], int b[][100], int n, int m)
{
    fout.open("out4.txt", ios::out);
    if(!fout)   return;

    fout << SecondMax(a, n, m) << " " << countSecond(a, n, m) << endl;
    createB(a, b, n, m);
    fout << countB(b, n, m) << endl;
}

int main()
{
    fstream fin, fout;
    int n, m, a[100][100], b[100][100];
    readFile(fin, a, n, m);
    writeFile(fout, a, b, n, m);
    fin.close();
    fout.close();
    return 0;
}