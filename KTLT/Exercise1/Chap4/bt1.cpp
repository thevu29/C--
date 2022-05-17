#include <iostream>
using namespace std;

int Sum(int *a, int n)
{
    if (n == 0)
        return a[0];
    return a[n] + Sum(a, n - 1);
}

int main ()
{
    int n, *a;
    cin >> n;
    a = new int[n];
    if (!a) return -1;
    for (int i = 0; i < n; i++) cin >> a[i];
    cout << "Tong cac phan tu mang = " << Sum(a, n);
    delete []a;
    return 0;   
}