#include <iostream>
using namespace std;

int Cau_a(int a[], int n)
{
    if (n == 1)
        return a[0];
    return a[n - 1] + Cau_a(a, n - 1);
}

int Cau_b(int a[], int n)
{
    if (n == 1)
        return a[0];
    if (a[n - 1] > Cau_b(a, n - 1))
        return a[n - 1];
    return Cau_b(a, n - 1);
}

int main ()
{
    int n;
    cout << "n = ";
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    cout << "Ket qua cau a: " << Cau_a(a, n) << endl;
    cout << "Ket qua cau b: " << Cau_b(a, n);
    return 0;
}