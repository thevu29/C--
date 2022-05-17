#include <iostream>
using namespace std;

void Input(int a[][100], int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cin >> a[i][j];
    }
}

void Find(int a[][100], int n, int m)
{
    int max = a[0][0], min = a[0][0];
    int pos1 = 0, pos2 = 0, pos3 = 0, pos4 = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i][j] < min)
            {
                min = a[i][j];
                pos3 = i;
                pos4 = j;
            }
            if (a[i][j] > max)
            {
                max = a[i][j];
                pos1 = i;
                pos2 = j;
            }
        }
    }

    cout << "max = " << max << " o vi tri " << pos1 << pos2 << endl;
    cout << "min = " << min << " o vi tri " << pos3 << pos4 << endl;
}

void Sum(int a[][100], int n, int m)
{
    int s1, s2, pos1, pos2, smax = INT_MIN, smin = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        s1 = 0;
        for (int j = 0; j < m; j++)
        {
            s1 += a[i][j];
        }
        if (s1 > smax)
        {
            smax = s1;
            pos1 = i;
        }
    }

    for (int j = 0; j < m; j++)
    {
        s2 = 0;
        for (int i = 0; i < n; i++)
        {
            s2 += a[i][j];
        }
        if (s2 < smin)
        {
            smin = s2;
            pos2 = j;
        }
    }
    
    cout << "smax = " << smax << " o vi tri " << pos1 << endl;
    cout << "smin = " << smin << " o vi tri " << pos2;
}

int main()
{
    int n, m, a[100][100];
    cin >> n >> m;
    Input(a, n, m);
    Find(a, n, m);
    Sum(a, n, m);
    return 0;
}