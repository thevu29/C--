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

int Timkiem(int a[], int n, int k)
{
	for (int i = 0; i < n; i++) {
		if (a[i] == k) 
			return i;
	}
	return -1;
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
	int n, a[n], k;
	cout << "Nhap so phan tu mang: ";
	cin >> n;
	NhapMang(a, n);
	cout << "Mang sau khi nhap: ";
	XuatMang(a, n);
	cout << "\nNhap so de tim: ";
	cin >> k;
	int tk = Timkiem(a, n, k);
	if (tk != -1) {
		cout << "Tim thay " << k << " trong mang tai vi tri thu " << tk;
	}
	else {
		cout << "Khong tim thay " << k << " trong mang ";
	}
	Sapxeptangdan(a, n);
	cout << "\nMang sau khi sap xep: ";
	XuatMang(a, n);
	return 0;
}
