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

void createTmp(int a[][100], int tmp[][100], int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
            tmp[i][j] = a[i][j];
    }
}

void Sort(int a[][100], int m, int n)
{
    for (int j = 0; j < n; j++)
    {
        for (int i = 0; i < m; i++)
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

void createB(int tmp[][100], int m, int n)
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

    if (x - p < q - x)
        return p;
    return q;
}

void createC(int tmp[][100], int m, int n)
{
    int c[100][100];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (Prime(tmp[i][j]))
                c[i][j] = tmp[i][j];
            else
                c[i][j] = findPrime(tmp[i][j]);
        }
    }
    Output(c, m, n);
}

void createD(int tmp[][100], int m, int n)
{
    for (int j = -1; j <= n; j++)   
    {
        tmp[-1][j] = -1;
        tmp[m][j] = -1;
    }

    for (int i = -1; i <= m; i++)   
    {
        tmp[i][-1] = -1;
        tmp[i][n] = -1;
    }
    
    int cnt, d[100][100];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cnt = 0;
            if (tmp[i - 1][j - 1] % 2 == 0)
                cnt++;
            if (tmp[i - 1][j] % 2 == 0)
                cnt++;
            if (tmp[i - 1][j + 1] % 2 == 0)
                cnt++;
            if (tmp[i][j - 1] % 2 == 0)
                cnt++;
            if (tmp[i][j + 1] % 2 == 0)
                cnt++;
            if (tmp[i + 1][j - 1] % 2 == 0)
                cnt++;
            if (tmp[i + 1][j] % 2 == 0)
                cnt++;
            if (tmp[i + 1][j + 1] % 2 == 0)
                cnt++;
            
            d[i][j] = cnt;
        }
    }

    Output(d, m, n);
}

int main()
{
    int m, n, a[100][100], tmp[100][100];
    cin >> m >> n;
    Input(a, m, n);
    createTmp(a, tmp, m, n);
    cout << "Cau a: " << endl;
    Sort(a, m, n);
    cout << "Cau b: " << endl;
    createB(tmp, m, n);
    cout << "Cau c: " << endl;
    createC(tmp, m, n);
    cout << "Cau d: " << endl;
    createD(tmp, m, n);
    return 0;
}