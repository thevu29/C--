#include <iostream>
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
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
}

void Hoanvi(int &a, int &b) 
{
    int tmp = a;
    a = b;
    b = tmp;
}

void Sapxeptangdan(int a[], int n)
{
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] > a[j]) 
                Hoanvi(a[i], a[j]);
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
    cout << "Day so: ";
    Xuatmang(a, n);
    Sapxeptangdan(a, n);
    cout << "\nDay so sap xep tang dan: ";
    Xuatmang(a, n);
    return 0;
}