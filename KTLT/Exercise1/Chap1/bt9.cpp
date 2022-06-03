#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

int Count(int x)
{
    int cnt = 0;
    while (x > 0)
    {
        x /= 10;
        cnt++;
    }
    return cnt;
}

void createArr(int a[], int b[], int A, int B, int n, int m)
{
    for (int i = n - 1; i >= 0; i--)
    {
        a[i] = A % 10;
        A /= 10;
    }

    for (int i = m - 1; i >= 0; i--)
    {
        b[i] = B % 10;
        B /= 10;
    }
}

int Compare(int a[], int b[], int A, int B, int &x, int &y, int n, int m)
{       
    int i = x + 1, j = y + 1;
    a[n] = INT_MIN, b[m] = INT_MIN;

    while (i <= n && j <= m)
    {
        if (b[j] > a[i])
        {
            y++;
            return b[y - 1];
        }
        
        else if (b[j] < a[i])
        {
            x++;
            return a[x - 1];
        }

        else
        {
            i++;
            j++;
        }
    }

    return 0;
}

void createMax(int a[], int b[], int c[], int A, int B, int n, int m)
{
    int i = 0, j = 0;
    a[n] = INT_MIN, b[m] = INT_MIN;

    for (int k = 0; k < n + m; k++)
    {
        if (a[i] < b[j])
        {
            c[k] = b[j];
            j++;
        }

        else if (a[i] > b[j])
        {
            c[k] = a[i];
            i++;
        }

        else
            c[k] = Compare(a, b, A, B, i, j, n, m);
    }

    for (int i = 0; i < n + m; i++)
        cout << c[i];
}

int main()
{
    srand(time(NULL));
    int A, B, a[100], b[100], c[100];
    A = rand() % 100000 + 1;
    B = rand() % 100000 + 1;
    cout << "A = " << A << endl;
    cout << "B = " << B << endl;
    int n = Count(A), m = Count(B);
    createArr(a, b, A, B, n, m);
    createMax(a, b, c, A, B, n, m);
    return 0;
}