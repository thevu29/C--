#include <iostream>
#include <math.h>
#include <fstream>
using namespace std;

void readFile(fstream &fin, int a[][100], int &n, int &m)
{
    fin.open("inp3.txt", ios::in);
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

int countMax(int a[][100], int n, int m)
{
    int cnt = 0, max = Max(a, n, m);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i][j] == max)
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

int findPrime(int x)
{
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

    if (x - p < q - x)
        return p;
    else if (x - p > q - x)
        return q;
    return q;
}

void createB(int a[][100], int b[][100], int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (Prime(a[i][j]))
                b[i][j] = a[i][j];
            else
                b[i][j] = findPrime(a[i][j]);
        }
    }
}

int Symetric(int x)
{
    int tmp = x, s = 0;
    while (tmp != 0)
    {
        s = s * 10 + tmp % 10;
        tmp /= 10;
    }

    if (s == x)
        return 1;
    return 0;
}

int countSymetricPrime(int b[][100], int n, int m)
{
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (Symetric(b[i][j]))
                cnt++;
        }
    }
    return cnt; 
}

int RowMin(int a[][100], int n, int m)
{   
    int min = a[n][0];
    for (int i = 0; i < m; i++)
    {
        if (a[n][i] < min)
            min = a[n][i];
    }
    return min;
}

void createC(int a[][100], int c[][100], int n, int m)
{
    int min;
    for (int i = 0; i < n; i++)
    {
        min = RowMin(a, i, m);
        for (int j = 0; j < m; j++)
            c[i][j] = a[i][j] * min;
    }
}

int Split(int x)
{
    int s = 0;
    while (x != 0)
    {
        s += x % 10;
        x /= 10;
    }
    return s;
}

int SumC(int c[][100], int n, int m)
{
    int s = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            s += Split(c[i][j]);
    }
    return s;
}

int countRowPrime(int a[][100], int n, int m)
{
    int cnt = 0;
    for (int i = 0; i < m; i++)
    {
        if (Prime(a[n][i]))
            cnt++;
    }
    return cnt;
}

int countColPrime(int a[][100], int n, int m)
{
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (Prime(a[i][m]))
            cnt++;
    }
    return cnt;
}

void createD(int a[][100], int d[][100], int n, int m)
{
    int cnt1, cnt2;
    for (int i = 0; i < n; i++)
    {
        cnt1 = countRowPrime(a, i, m);
        for (int j = 0; j < m; j++)
        {
            cnt2 = countColPrime(a, n, j);

            if (Prime(a[i][j]))
                d[i][j] = a[i][j] * (cnt1 + cnt2 - 1);
            else
                d[i][j] = a[i][j] * (cnt1 + cnt2);
        }
    }
}

int SumD(int d[][100], int n, int m)
{
    int s = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            s += d[i][j];
    }
    return s;
}

void createE(int a[][100], int e[][100], int n, int m)
{
    for (int i = -1; i <= m; i++)   a[-1][i] = -1;
    for (int i = -1; i <= n; i++)   a[i][-1] = -1;
    for (int i = -1; i <= m; i++)   a[n][i] = -1;
    for (int i = -1; i <= m; i++)   a[i][m] = -1;

    int cnt;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cnt = 0;
            
            if (a[i - 1][j - 1] % 2 == 0)
                cnt++;
            if (a[i - 1][j] % 2 == 0)
                cnt++;
            if (a[i - 1][j + 1] % 2 == 0)
                cnt++;
            if (a[i][j - 1] % 2 == 0)
                cnt++;
            if (a[i][j + 1] % 2 == 0)
                cnt++;
            if (a[i + 1][j - 1] % 2 == 0)
                cnt++;
            if (a[i + 1][j] % 2 == 0)
                cnt++;
            if (a[i + 1][j + 1] % 2 == 0)
                cnt++;
            
            e[i][j] = cnt;
        }
    }
}

int countE(int e[][100], int n, int m)
{
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (e[i][j] >= 5)
                cnt++;
        }
    }
    return cnt;
}

void writeFile(fstream &fout, int a[][100], int b[][100], int c[][100], int d[][100], int e[][100], int n, int m)
{
    fout.open("out3.txt", ios::out);
    if(!fout)   return;

    fout << Max(a, n, m) << " " << countMax(a, n, m) << endl;
    createB(a, b, n, m);
    fout << countSymetricPrime(b, n, m) << endl;
    createC(a, c, n, m);
    fout << SumC(c, n, m) << endl;
    createD(a, d, n, m);
    fout << SumD(d, n, m) << endl;
    createE(a, e, n, m);
    fout << countE(e, n, m);
}

int main()
{
    fstream fin, fout;
    int n, m, a[100][100], b[100][100], c[100][100], d[100][100], e[100][100];
    readFile(fin, a, n, m);
    writeFile(fout, a, b, c, d, e, n, m);
    fin.close();
    fout.close();
    return 0;
}