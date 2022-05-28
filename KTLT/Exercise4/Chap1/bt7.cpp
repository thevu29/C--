#include <iostream>
#include <math.h>
using namespace std;

int Sum(int a[], int n)
{
    if (n == 0)
        return a[0];
    return a[n] + Sum(a, n - 1);    
}

int Max(int a[], int n)
{
    if (n == 0)
        return a[0];
    return max(a[n], Max(a, n - 1));
}

int Prime(int x)
{
    if (x < 2)
        return 0;
    for (int i = 2; i <= sqrt(x); i++)
    {
        if (x % i == 0)
            return 0;
    }
    return 1;
}

int Count(int a[], int n)
{
    if (n < 0)
        return 0;
    if (Prime(a[n]))
        return 1 + Count(a, n - 1);
    return Count(a, n - 1);
}

int main()
{
    int n, a[100];
    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];
    cout << Sum(a, n - 1) << endl;
    cout << Max(a, n - 1) << endl;
    cout << Count(a, n - 1);
    return 0;
}