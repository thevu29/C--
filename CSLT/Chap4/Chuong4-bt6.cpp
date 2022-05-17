#include <iostream>
using namespace std;

void ChuyendoiSangNhiPhan(int n)
{
    int b;
    if (n > 0) {
        int a = n % 2;
        ChuyendoiSangNhiPhan(n/2);
        cout << a;
    }
}

int main ()
{
    int n, b;
    cout << "Nhap n: ";
    cin >> n;
    cout << n << " doi thanh nhi phan: ";
    ChuyendoiSangNhiPhan(n);
    return 0;
}