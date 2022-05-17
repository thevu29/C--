#include <iostream>
using namespace std;

void Nhapmang(int a[], int n)
{
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

int main ()
{
    int n;
    cout << "Nhap so phan tu day: ";
    cin >> n;
    int a[n];
    cout << "Nhap phan tu day: ";
    Nhapmang(a, n);
    cout << "Day so: ";
    Xuatmang(a, n);
    return 0;
}