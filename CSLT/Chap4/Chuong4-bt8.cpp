#include <iostream>
using namespace std;

/*
int Giaithua(int n)
{
    if (n <= 1)
        return 0;
    return n * Giaithua(n - 1);
} */

int tinhTich(int n)
{
    int t = 1;
    for (int i = n; i <= 2*n; i++) {
        t *= i;
    }
    return t;
}

int main ()
{
    int n;
    cout << "Nhap n: ";
    cin >> n;
    int s = 0;
    for (int i = 1; i <= n; i++) {
        s += tinhTich(i);
        // s += Giaithua(i * 2) / Giaithua(i - 1);
    }
    cout << "Tong 1*2 + 2*3*4 + ... + n*(n+1)*...*2n = " << s;
    return 0;
}