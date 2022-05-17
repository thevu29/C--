#include <iostream>
using namespace std;

void Nhapmang(int a[], int n)
{
    cout << "Nhap phan tu mang: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
}

void Xuatmang(int a[], int n)
{
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
}

void Sort(int a[], int n)
{
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] > a[j]) {
                int tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }
    Xuatmang(a, n);
}

int main ()
{
    int n;
    cout << "Nhap so phan tu mang: ";
    cin >> n;
    int a[n];
    Nhapmang(a, n);
    cout << "Mang sap xep tang dan: ";
    Sort(a, n);
    return 0;
}