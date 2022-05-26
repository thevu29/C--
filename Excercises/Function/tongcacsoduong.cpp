#include <iostream>
using namespace std;

void Nhapdayso(int n, int a[])
{
	for (int i = 0; i < n; i++) {
		cout << "Nhap so thu " << i + 1 << ": ";
		cin >> a[i];
	}
}

int tongSoduong(int n, int a[])
{
	int s = 0;
	for (int i = 0; i < n; i++) {
		if (a[i] > 0) {
			s += a[i];
		}
	}
	return s;
}

int main ()
{
	int n;
	do {
		cout << "Nhap n: ";
		cin >> n;
		if (n > 50) {
			cout << "Nhap n <= 50 ";
		}
	}
	while (n > 50);
	int a[n];
	Nhapdayso(n, a);
	cout << "Tong so duong trong day: " << tongSoduong(n, a);

	return 0;
}