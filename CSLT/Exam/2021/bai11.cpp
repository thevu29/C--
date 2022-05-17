#include <iostream>
#include <math.h>
using namespace std;

int Demsonguyenduong(int a[], int n)
{
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] > 0)
            cnt++;
    }
    return cnt;
}

void Nhapmang(int a[], int n)
{
    cout << "Nhap phan tu mang: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
}

int main ()
{
    int n;
    cout << "Nhap so phan tu mang: ";
    cin >> n;
    int a[n];
    Nhapmang(a, n);
    double tbn = 1;
    for (int i = 0; i < n; i++) {
        if (a[i] > 0)
            tbn *= pow(a[i], 1.0 / Demsonguyenduong(a, n));
    }
    cout << "Trung binh nhan cac so nguyen duong cua mang: " << tbn;
    return 0;
}