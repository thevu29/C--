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

void SapxepGiamdan(int a[], int n)
{
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            if (a[i] < a[j])
                Hoanvi(a[i], a[j]);
        }
    }
}

int Timphantuthuk(int a[], int n, int k)
{
    int vtri, c;
    int tmp = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] < a[tmp]) {
            k--;
            tmp = i;
        }
        if (k == 1) {
            vtri = i;
            break;
        }
    }
    return a[vtri];
}

int main ()
{
    int n, k, x;
    cout << "Nhap so phan tu mang: ";
    cin >> n;
    int a[n];
    Nhapmang(a, n);
    cout << "Day so: ";
    Xuatmang(a, n);
    cout << "\nTim gia tri lon thu: ";
    cin >> k;
    SapxepGiamdan(a, n);
    if (k > n || k < 0) {
        cout << "Gia tri muon tim khong hop le ";
    }
    else {
        cout << "Gia tri lon thu " << k << " trong mang la: " << Timphantuthuk(a, n, k);
    }
    return 0;
}