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

bool checkSoleSochan(int n)
{
	if (n % 2 == 0)
		return true;
	return false;
}

void Hoanvi(int &a, int &b)
{
	int tam = a;
	a = b;
	b = tam;
}

void Sapxep(int a[], int n)
{
	for (int i = 0; i < n; i++) {
		for (int j = i; j < n; j++) {
			if (checkSoleSochan(a[j]))
				Hoanvi(a[j], a[i]);
		}
	}
}

int main ()
{
	int n;
	cout << "Nhap phan tu mang: ";
	cin >> n;
	int a[n];
	Nhapmang(a, n);
	Sapxep(a, n);
	cout << "Mang sau khi sap xep so chan ve dau, so le ve cuoi: ";
	Xuatmang(a, n);
	return 0;
}