#include <iostream>
using namespace std;

void Input(int a[][100], int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
            cin >> a[i][j];
    }
}

int Average(int a[][100], int i, int n)
{
    int max = a[i][0], min = a[i][0];
    for (int j = 0; j < n; j++)
    {
        if (a[i][j] > max)
            max = a[i][j];
        if (a[i][j] < min)
            min = a[i][j];
    }
    return (max + min) / 2;
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

void createB(int a[][100], int m, int n)
{
    int k, b[100][100];
    for (int i = 0; i < m; i++)
    {
        k = Average(a, i, n);
        for (int j = 0; j < n; j++)
            b[i][j] = a[i][j] * k;
    }
    Output(b, m, n);
}

int main()
{
    int m, n, a[100][100];
    cin >> m >> n;
    Input(a, m, n);
    createB(a, m, n);
    return 0;
}