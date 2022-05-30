#include <iostream>
#include <fstream>
#include <math.h>
using namespace std;

void readFile(fstream &fin, int a[][100], int &m, int &n)
{
    fin.open("bt8.inp.txt", ios::in );
    if(!fin)    return;

    fin >> m;
    fin >> n;

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
            fin >> a[i][j];
    }
}

int Max(int a[][100], int m, int n)
{
    int min, maxx = INT_MIN;
    for (int i = 0; i < m; i++)
    {
        min = a[i][0];
        for (int j = 0; j < n; j++)
        {
            if (a[i][j] < min)
                min = a[i][j];
        }
        maxx = max(maxx, min);
    }
    return maxx;
}

void createArrC(int a[][100], int c[], int m, int n)
{
    int k = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
            c[k++] = a[i][j];
    }
}

void Min(fstream &fout, int c[], int m, int n)
{
    int x, y, xpos1, xpos2, ypos1, ypos2;
    x = INT_MAX, y = 0;

    for (int i = 0; i < n * m; i++)
    {
        for (int j = i + 1; j < n * m; j++)
        {
            if (abs(c[j] - c[i]) <= abs(y - x))
            {
                x = c[i];
                y = c[j];
                xpos1 = i / n + 1;
                xpos2 = i % n + 1;
                ypos1 = j / n + 1;
                ypos2 = j % n + 1;
            }
        }
    }

    fout << abs(x - y) << " " << xpos1 << " " << xpos2 << " " << ypos1 << " " << ypos2 << endl;
} 

int RowMin(int a[][100], int m, int n)
{
    int min = a[m][0];
    for (int i = 0; i < n; i++)
    {
        if (a[m][i] < min)
            min = a[m][i];
    }
    return min;
}

void createArrB(int a[][100], int b[][100], int m, int n)
{
    int min;
    for (int i = 0; i < m; i++)
    {
        min = RowMin(a, i, n);
        for (int j = 0; j < n; j++)
            b[i][j] = a[i][j] * min;
    }
}

int SumB(int b[][100], int m, int n)
{
    int s = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
            s += b[i][j];
    }
    return s;
}

int Prime(int x)
{
    if (x < 2)
        return 0;
    for (int i = 2; i <= sqrt(x); i++)
    {
        if (x % i == 0)
            return 0;
    }
    return 1;
}

int findPrime(int x)
{
    if (x == 1) 
        return 2;

    int p, q, i, j;

    i = x - 1;
    while (i >= 2)
    {
        if (Prime(i))
        {
            p = i;
            break;
        }
        i--;
    }

    j = x + 1;
    while (true)
    {
        if (Prime(j))
        {
            q = j;
            break;
        }
        j++;
    }

    if (x - p <= q - x)
        return p;   
    return q;
}

void createArrD(int a[][100], int d[][100], int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (!Prime(a[i][j]))
                d[i][j] = findPrime(a[i][j]);   
            else
                d[i][j] = a[i][j];
        }
    }
}

int SumD(int d[][100], int m, int n)
{
    int s = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
            s += d[i][j];
    }
    return s;
}

int RowMax(int a[][100], int i, int n)
{
    int max = a[i][0];
    for (int j = 0; j < n; j++)
    {
        if (a[i][j] > max)
            max = a[i][j];
    }
    return max;
}

int ColMin(int a[][100], int m, int j)
{
    int min = a[0][j];
    for (int i = 0; i < m; i++)
    {
        if (a[i][j] < min)
            min = a[i][j];
    }
    return min;
}

void Saddle(fstream &fout, int a[][100], int m, int n)
{   
    int max, min;
    for (int i = 0; i < m; i++)
    {
        max = RowMax(a, i, n);
        for (int j = 0; j < n; j++)
        {
            min = ColMin(a, m, j);
            if (a[i][j] == max && a[i][j] == min)
            {
                fout << a[i][j] << " " << i + 1<< " " << j + 1;
                break;
            }
        }
    }
}

void writeFile(fstream &fout, int a[][100], int b[][100], int d[][100], int c[], int m, int n)
{
    fout.open("bt8.out.txt", ios::out);
    if(!fout)   return;

    fout << Max(a, m, n) << endl;
    createArrC(a, c, m, n);
    Min(fout, c, m, n);
    createArrB(a, b, m, n);
    fout << SumB(b, m, n) << endl;
    createArrD(a, d, m, n);
    fout << SumD(d, m, n) << endl;
    Saddle(fout, a, m, n);
}

int main()
{
    fstream fin, fout;
    int m, n, a[100][100], b[100][100], c[100], d[100][100];
    readFile(fin, a, m, n);
    writeFile(fout, a, b, d, c, m, n);
    fin.close();
    fout.close();
    return 0;
}