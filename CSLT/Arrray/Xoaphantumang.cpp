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
    for(int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
}

void Xoaphantu(int a[], int n, int k) 
{
    for(int i = k - 1; i < n - 1; i++) {
          a[i] = a[i + 1];
    }
    Xuatmang(a, n - 1);
}

int main ()
{
    int n, k;
    cout << "Nhap so phan tu mang: ";
    cin >> n;
    int a[n];
    Nhapmang(a, n);
    cout << "Nhap vi tri muong xoa: ";
    cin >> k;
    cout << "Mang sau khi xoa vi tri " << k << ": ";
    Xoaphantu(a, n, k); 
    return 0;
}