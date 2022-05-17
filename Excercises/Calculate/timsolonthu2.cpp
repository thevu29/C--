#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

void Nhap(int a[], int n)
{
	//cout << "Nhap mang: ";
	for (int i = 0; i < n; i++) {
		a[i] = rand () % 100 + 1;
	}
}

void Xuat(int a[], int n)
{
	cout << "Mang: ";
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
}

int Max(int a[], int n)
{
	int max1, second;
	/*if (a[0] > a[1]) {
		max = a[0];
		second = a[1];
	}
	else {
		max = a[1];
		second = a[0];
	}*/
	max1 = max(a[0], a[1]);
	second = min(a[0], a[1]);
	for (int i = 2; i < n; i++) {
		if (a[i] > max1) {
			second = max1;
			max1 = a[i];
		}
		else if (a[i] < max1 && a[i] > second) {
			second = a[i];
		}
	}
	return second;
}

int main ()
{
	srand(time(NULL));
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int a[n];
	Nhap(a, n);
	Xuat(a, n);
	cout << "\nSo lon thu 2 la: " << Max(a, n);
	return 0;
}