#include <iostream>
using namespace std;

void Nhapmang(int a[], int n)
{
	for (int i = 0; i < n; i++) {
		cout << "Nhap so thu " << i + 1 << ": ";
		cin >> a[i];
	}
}

void Xuatsochan(int a[], int n)
{
	for (int i = 0; i < n; i++) {
		if (a[i] % 2 == 0)
			cout << a[i] << " ";
	}
}

int tongSochan(int a[], int n)
{
	int s = 0;
	for (int i = 0; i < n; i++) {
		if (a[i] % 2 == 0)
			s += a[i];
	}
	return s;
}

int demSochan(int a[], int n)
{
	int dem = 0;
	for (int i = 0; i < n; i++) {
		if (a[i] % 2 == 0)
			dem++;
	}
	return dem;
}

int main ()		
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int a[n];
	Nhapmang(a, n);
	cout << "Cac so chan trong mang: ";
	Xuatsochan(a, n);
	cout << "\nTong cac so chan trong mang: " << tongSochan(a, n);
	cout << "\nCo " << demSochan(a, n) << " so chan trong mang ";
	return 0;
}