#include <iostream>
using namespace std;

void Input(int a[][100], int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
}

void Output(int a[][100], int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << a[i][j] << "\t";
        }
        cout << endl;
    }
}

int Min(int a[][100], int m, int n)
{
    int min = a[m][0];
    for (int j = 0; j < n; j++)
    {
        if (a[m][j] < min)
            min = a[m][j];
    }
    return min;
}

int Max(int a[][100], int m, int n)
{
    int max = a[m][0];
    for (int j = 0; j < n; j++)
    {
        if (a[m][j] > max)
            max = a[m][j];
    }
    return max;
}

void creatArrB(int a[][100], int b[][100], int m, int n)
{
    int min, max, k;
    for (int i = 0; i < m; i++)
    {
        min = Min(a, i, n);
        max = Max(a, i, n);
        k = (min + max) / 2;
        for (int j = 0; j < n; j++)
        {
            b[i][j] = a[i][j] * k;
        }
    }
    Output(b, m, n);
}

int main()
{
    int m, n, a[100][100], b[100][100];
    cin >> m >> n;
    Input(a, m, n);
    creatArrB(a, b, m, n);
    return 0;
}