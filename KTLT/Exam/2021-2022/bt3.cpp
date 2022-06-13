#include <iostream>
#include <math.h>
#include <fstream>
using namespace std;

void readFile(fstream &fin, int a[][100], int &m, int &n)
{
    fin.open("table.txt", ios::in);
    if (!fin)   return;

    fin >> m;
    fin >> n;
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
            fin >> a[i][j];
    }
}

int Square(int x)
{
    int tmp = sqrt(x);
    if (tmp * tmp == x)
        return 1;
    return 0;
}

int countSquare(int a[][100], int m, int n)
{
    int cnt = 0;
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (Square(a[i][j]))
                cnt++;
        }
    }
    return cnt;
}

void SquareFile(fstream &f1, int a[][100], int m, int n)
{
    f1.open("square_file.txt", ios::out);
    if(!f1)     return;

    f1 << countSquare(a, m, n) << endl;
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (Square(a[i][j]))
                f1 << a[i][j] << " " << i << " " << j << endl;
        }
    }
}

void OddEvenFile(fstream &f2, int a[][100], int m, int n)
{
    f2.open("oddeven_file.txt", ios::out);
    if (!f2)    return;

    int odd = 0, even = 0;
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (a[i][j] % 2 != 0)
                odd++;
            else
                even++;
        }
    }

    f2 << odd << endl;
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (a[i][j] % 2 != 0)
                f2 << a[i][j] << " ";
        }
    }
    f2 << endl;

    f2 << even << endl;
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (a[i][j] % 2 == 0)
                f2 << a[i][j] << " ";
        }
    }
}

void Sort(int a[][100], int m, int n)
{
    for (int j = 1; j <= n; j++)
    {
        for (int i = 1; i < m; i++)
        {
            for (int k = i + 1; k <= m; k++)
            {
                if (a[i][j] > a[k][j])
                    swap(a[i][j], a[k][j]);
            }
        }
    }
}

void SortFile(fstream &f3, int a[][100], int m, int n)
{
    f3.open("sort_file.txt", ios::out);
    if (!f3)    return;

    Sort(a, m, n);
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            f3 << a[i][j] << " ";
        }
        f3 << endl;
    }
}

int main()
{
    fstream fin, f1, f2, f3;
    int m, n, a[100][100];
    readFile(fin, a, m, n);
    SquareFile(f1, a, m, n);
    OddEvenFile(f2, a, m, n);
    SortFile(f3, a, m, n);
    fin.close();
    f1.close();
    f2.close();
    f3.close();
    return 0;
}