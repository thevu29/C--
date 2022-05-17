#include <iostream>
using namespace std;

void Nhapmang(int a[], int n)
{
    cout << "Nhap phan tu mang la cac so nguyen duong: ";
    for (int i = 0; i < n; i++) {
       cin >> a[i];
    }
}

void Dem(int a[], int n)
{
    int cnt, b;
    for (int i = 0; i < n; i++) {
        cnt = 0;
        while (a[i] != 0) {
            b = a[i] % 10;
            if (b > 0)
                cnt++;
            a[i] /= 10;
        }
        cout << "Chu so nguyen duong cua so thu " << i + 1 << ": " << cnt << endl;
    }
}

int main ()
{
    int n;
    cout << "Nhap so phan tu mang: ";
    cin >> n;
    int a[n];
    Nhapmang(a, n);
    Dem(a, n);
    return 0;
}