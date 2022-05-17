#include <iostream>
using namespace std;

int Cau_a(int n)
{
    if (n == 1 || n == 2)
        return 1;
    return Cau_a(n - 1) + (n - 1) * Cau_a(n - 2);
}

int Cau_b(int x[], int n)
{
    x[1] = 1, x[2] = 1;
    for (int i = 3; i <= n; i++) {
        x[i] = x[i - 1] + (i - 1) * x[i - 2];
    }
    return x[n];
}

int main ()
{
    int n;
    do {
        cout << "Nhap n >= 3: ";
        cin >> n;
    }
    while (n < 3);
    cout << "Cau a: " << Cau_a(n);
    int x[n];
    cout << "\nCau b: " << Cau_b(x, n);
    return 0;
}