#include <iostream>
#include <math.h>
using namespace std;

void Nhapmang(int a[], int n)
{
    for (int i = 0; i < n; i++) {
        cout << "Nhap so thu " << i + 1 << ": ";
        cin >> a[i];
    }
}

void Xuatmang(int a[], int n)
{
    cout << "Day so: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
}

bool checkSonguyento(int n)
{
    if (n < 2)
        return false;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % 2 == 0)
            return false;
    }
    return true;
}

void Songuyentodaonguoc(int a[], int n)
{
    cout << "\nSo nguyen to ma dao nguoc cung la so nguyen to: ";
    for (int i = 0; i < n; i++) {
        if (checkSonguyento(a[i])) {
            int daonguoc = 0;
            int c = a[i];
            while (c > 0) {
                int a = c % 10;
                daonguoc = daonguoc * 10 + a;
                c /= 10;
            }
            if (checkSonguyento(daonguoc))
                cout << a[i] << " ";
        }
    }
}

int main ()
{
    int n;
    cout << "Nhap so phan tu mang: ";
    cin >> n;
    int a[n];
    Nhapmang(a, n);
    Xuatmang(a, n);
    Songuyentodaonguoc(a, n);
    return 0;
}