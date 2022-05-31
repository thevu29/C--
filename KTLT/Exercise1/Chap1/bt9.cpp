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

void createArr(int A, int B, int a[], int b[])
{
    int n = Count(A), m = Count(B);
    
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

int Compare(int A, int B, int a[], int b[], int &x, int &y)
{       
    int n = Count(A), m = Count(B), i = x + 1, j = y + 1;
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

void createMax(int A, int B, int a[], int b[], int c[])
{
    int n = Count(A), m = Count(B), k = 0, i = 0, j = 0;
    a[n] = INT_MIN, b[m] = INT_MIN;

    while (i < n && j < m)
    {
        if (a[i] < b[j])
        {
            c[k++] = b[j];
            j++;
        }

        else if (a[i] > b[j])
        {
            c[k++] = a[i];
            i++;
        }

        else
            c[k++] = Compare(A, B, a, b, i, j);
    }

    while (i < n)   c[k++] = a[i++];
    while (j < m)   c[k++] = b[j++];

    for (int i = 0; i < k; i++)
        cout << c[i];
}

int main()
{
    srand(time(NULL));
    int A, B, a[100], b[100], c[100];
    cout << "A = "; // 23306 5470
    cin >> A;
    cout << "B = ";
    cin >> B;
    // A = rand() % 100000 + 1;
    // B = rand() % 100000 + 1;
    // cout << "A = " << A << endl;
    // cout << "B = " << B << endl;
    createArr(A, B, a, b);
    createMax(A, B, a, b, c);
    return 0;
}