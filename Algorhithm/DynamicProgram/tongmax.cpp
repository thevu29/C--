#include <iostream>
using namespace std;

void Input(int a[], int n)
{
    for (int i = 0; i < n; i++) 
        cin >> a[i];
}

int MaxSum(int a[], int n)
{
    int smax = INT_MIN, s = 0;
    for (int i = 0; i < n; i++) {
        s = max(a[i], s + a[i]);
        smax = max(s, smax);
    }
    return smax;
}

int main ()
{
    int n, a[100];
    cin >> n;
    Input(a, n);
    MaxSum(a, n);
    return 0;
}