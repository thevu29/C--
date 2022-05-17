#include <iostream>
#include <algorithm>
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
    cout << "Nhap n: ";
    cin >> n;
    int a[n];
    Nhapmang(a, n);
    cout << "Mang: ";
    Xuatmang(a, n);
    sort(a, a + n); //sap xep tang dan tu phan tu thu 0 toi n - 1
    int cnt = 1;
    for(int i = 1; i < n; i++) {
        if(a[i] == a[i-1]) 
            cnt++;
        else {
            cout << "\nPhan tu " << a[i-1] << " xuat hien " << cnt << " lan ";
            cnt = 1;
        }
    }
    cout << "\nPhan tu " << a[n-1] << " xuat hien " << cnt << " lan ";
    return 0;
}