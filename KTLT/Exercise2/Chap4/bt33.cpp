#include <iostream>
using namespace std;

void Input(int a[][100], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cin >> a[i][j];
    }
}

void Output(int a[][100], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}

void MaxPosition(int a[][100], int n)
{
    int max = a[0][0], rpos = 0, cpos = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i][j] > max)
            {
                max = a[i][j];
                rpos = i;
                cpos = j;
            }
        }
    }
    cout << rpos << " " << cpos << endl;
}

int Check(int a[][100], int n)
{
    int flag;
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i][j] == a[j][i] && i != j)
                flag = 1;
            else if (a[i][j] != a[j][i] && i != j)
                flag = 0;
        }
    }

    if (flag)
        return 1;
    return 0;
}

void TransposeMat(int a[][100], int b[][100], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
                b[i][j] = a[i][j];
            else
                b[i][j] = a[j][i];
        }
    }
    Output(b, n);
}

int main()
{
    int n, a[100][100], b[100][100];
    cin >> n;
    Input(a, n);
    MaxPosition(a, n);
    if (Check(a, n))
        cout << "Ma tran doi xung qua duong cheo chinh " << endl;
    else
        cout << "Ma tran khong doi xung qua duong cheo chinh " << endl;
    TransposeMat(a, b, n);
    return 0;
}