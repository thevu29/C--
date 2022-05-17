#include <iostream>
using namespace std;

void NhapDayso(int n, int a[])
{
	for (int i = 0; i < n; i++) {
		cout << "So thu " << i + 1 << ": ";
		cin >> a[i];
	}
}

int Vitri(int n, int a[])
{
	int c;
	for (int i = 0; i <= n; i++) {
		if (a[i] % 2 == 0) {
			c = i;
		}
	}
	return c + 1;
}

void Sochan(int n, int a[])
{
	for (int i = 0; i < n; i++) {
		if (a[i] % 2 == 0) {
			cout << a[i] << " o vi tri thu " << Vitri(i, a) << endl;
		}
	}
}

void XuatDayso(int n, int a[]) 
{
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
}

int main ()
{
	int n;
	do {
		cout << "Nhap n: ";
		cin >> n;
		if (n <= 0 || n >=30) {
			cout << "Nhap 0 < n < 30 ";
		}
	}
	while (n <= 0 || n >= 30);
	int a[n];
	NhapDayso(n, a);
	cout << "Day so: ";
	XuatDayso(n, a);
	cout << "\nCac so chan trong day: " << endl;
	Sochan(n, a);
	return 0;
}