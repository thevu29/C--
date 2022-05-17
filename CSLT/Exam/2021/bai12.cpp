#include <iostream>
using namespace std;

void Nhapmang(int a[], int n)
{
    cout << "Nhap phan tu mang: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
}

int Dem(int a[], int n, int x)
{
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] == x)
            cnt++;
    }
    return cnt;
}

int main ()
{
    int n, x;
    cout << "Nhap so phan tu mang: ";
    cin >> n;
    int a[n];
    Nhapmang(a, n);
    cout << "Nhap x: ";
    cin >> x;
    cout << x << " xuat hien " << Dem(a, n, x) << " lan "; 
    return 0;
}