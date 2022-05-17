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

void Chenphantu(int a[], int n, int k, int x)
{
    for (int i = n; i > k - 1; i--) {
        a[i] = a[i - 1];
    }
    a[k - 1] = x;
    Xuatmang(a, n + 1);
}

int main ()
{
    int n, k, x;
    cout << "Nhap so phan tu mang: ";
    cin >> n;
    int a[n];
    Nhapmang(a, n);
    cout << "Nhap so muon chen them: ";
    cin >> x;
    cout << "Nhap vi tri muon chen them: ";
    cin >> k;
    cout << "Mang sau khi chen " << x << " vao vi tri " << k << ": ";
    Chenphantu(a, n, k, x);
    return 0;
}