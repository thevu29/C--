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

bool checkSonguyento(int n)
{
    if (n < 2)
        return false;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}

int SonguyentoMax(int a[], int n)
{
    int max = 0;
    for (int i = 0; i < n; i++) {
        if (checkSonguyento(a[i]) && a[i] > max) {
            max = a[i];
        }
    }
    if (max == 0)
        return 0;
    else 
        return max;
}

int main ()
{
    int n;
    cout << "Nhap so phan tu mang: ";
    cin >> n;
    int a[n];
    Nhapmang(a, n);
    cout << "So nguyen to lon nhat trong mang: " << SonguyentoMax(a, n);
    return  0;
}