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

void Hoanvi(int &a, int &b)
{
    int tmp = a;
    a = b;
    b = tmp;
}

void Sapxep(int a[], int n)
{
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            if (checkSonguyento(a[j]) == false)
                Hoanvi(a[j], a[i]);
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
    Sapxep(a, n);
    cout << "\nSap xep so nguyen to ve cuoi, so con lai ve dau: ";
    Xuatmang(a, n);
    return 0;
}