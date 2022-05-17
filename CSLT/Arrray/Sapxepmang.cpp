#include <iostream>
using namespace std;

void NhapMang(int a[], int n)
{
	for (int i = 0; i < n; i++) {
		cout << "Nhap phan tu thu " << i + 1 << ": ";
		cin >> a[i];
	}
}

void XuatMang(int a[], int n)
{
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
}

void Sapxeptangdan(int a[], int n)
{
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (a[i] > a[j]) {
				int tam = a[i];
                a[i] = a[j];
                a[j] = tam;
			}
		}
	}
}

int main ()
{
    int n;
    cout << "Nhap so phan tu mang: ";
	cin >> n;
    int a[n];
	NhapMang(a, n);
    Sapxeptangdan(a, n);
	cout << "\nMang sau khi sap xep tang dan: ";
	XuatMang(a, n);
    return 0;
}