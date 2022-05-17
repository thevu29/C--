#include <iostream>
#include <math.h>
using namespace std;

void Input(int a[][100], int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
            cin >> a[i][j];
    }
}

void Output(int a[][100], int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
            cout << a[i][j] << "\t";
        cout << endl;
    }
}

void CreatArrTmp(int a[][100], int tmp[][100], int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
            tmp[i][j] = a[i][j];
    }
}

void Sort(int a[][100], int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            for (int k = i + 1; k < m; k++)
            {
                if (a[i][j] > a[k][j])
                    swap(a[i][j], a[k][j]);
            }
        }
    }
    Output(a, m, n);
}

int Sum(int x)
{
    int s = 0;
    while (x != 0)
    {
        s += x % 10;
        x /= 10;
    }
    return s;
}

void CreatArrB(int tmp[][100], int m, int n)
{
    int b[100][100];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
            b[i][j] = Sum(tmp[i][j]);
    }
    Output(b, m, n);
}

bool Prime(int x)
{
    if (x < 2)
        return false;
    for (int i = 2; i <= sqrt(x); i++)
    {
        if (x % i == 0)
            return false;
    }
    return true;
}

int FindPrime(int x)
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
    return q;
}

void CreatArrC(int tmp[][100], int m, int n)
{
    int c[100][100];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (Prime(tmp[i][j]))
                c[i][j] = tmp[i][j];
            else
                c[i][j] = FindPrime(tmp[i][j]);
        }
    }
    Output(c, m, n);
}

int main()
{
    int m, n, a[100][100], tmp[100][100];
    cin >> m >> n;
    Input(a, m, n);
    CreatArrTmp(a, tmp, m, n);
    cout << "Cau a: " << endl;
    Sort(a, m, n);
    cout << "Cau b: " << endl;
    CreatArrB(tmp, m, n);
    cout << "Cau c: " << endl;
    CreatArrC(tmp, m, n);
    return 0;
}