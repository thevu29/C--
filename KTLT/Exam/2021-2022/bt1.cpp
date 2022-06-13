#include <iostream>
using namespace std;

int Sum(int a[], int n)
{
    if (n == 1)
        return a[0];
    return a[n - 1] + Sum(a, n - 1);
}

int main()
{
    int n, a[100];
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    cout << Sum(a, n);
    return 0;
}