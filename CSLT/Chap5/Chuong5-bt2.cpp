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

int GiatriMax(int a[], int n)
{
    int max = a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] > max)
            max = a[i];
    }
    return max;
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

int Demsonguyento(int a[], int n)
{
    int dem = 0;
    for (int i = 0; i < n; i++) {
        if (checkSonguyento(a[i]))
            dem++;
    }
    return dem;
}

int Tongcacchuso(int a[], int n)
{
    int s = 0;
    for (int i = 0; i < n; i++) {
        int c = a[i];
        while (c > 0) {
            int a = c % 10;
            s += a;
            c /= 10;
        }
    }
    return s;
}

bool checkSochan(int n)
{
    if (n % 2 == 0)
        return true;
    return false;
}

int SochanMax(int a[], int n)
{
    int max1 = 0;
    for (int i = 0; i < n; i++) {
        if (checkSochan(a[i]) && a[i] > max1)
            max1 = a[i];
    }
    return max1;
}

int SonguyentoMax(int a[], int n)
{
    int max2 = 0;
    for (int i = 0; i < n; i++) {
        if (checkSonguyento(a[i]) && a[i] > max2) {
            max2 = a[i];
        }
    }
    if (max2 == 0)
        return 0;
    else 
        return max2;
}

int main ()
{
    int n;
    cout << "Nhap so phan tu mang: ";
    cin >> n;
    int a[n];
    Nhapmang(a, n);
    Xuatmang(a, n);
    cout << "\nGia tri lon nhat cua day la: " << GiatriMax(a, n);
    cout << "\nSo nguyen to trong day la: " << Demsonguyento(a, n);
    cout << "\nTong cac chu so cua cac so trong day = " << Tongcacchuso(a, n);
    cout << "\nSo chan lon nhat trong day: " << SochanMax(a, n);
    cout << "\nSo nguyen to lon nhat trong day: " << SonguyentoMax(a, n);
    return 0;
}