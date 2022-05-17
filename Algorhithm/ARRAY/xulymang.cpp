#include <iostream>
using namespace std;

int main ()
{
	int n;
	cout << "Nhap so phan tu: ";
	cin >> n;	
	double a[n];
	for (int i = 0; i < n; i++) {
		cout << "Nhap gia tri phan tu thu " << (i + 1) << ": ";
		cin >> a[i];
	}
	cout << endl;

	cout << "Mang sau khi nhap: ";
	int i = 0;
	do {
		cout << a[i] << " ";
		i++;
	}
	while (i < n);
	
	i = 0;
	int j = 0;
	do {
		j = i + 1;
		do {
			if (a[i] < a[j]) {
				double tam = a[i];
				a[i] = a[j];
				a[j] = tam;
			}
			j++;
		}
		while (j < n);
		i++;
	}
	while (i < (n - 1));
	
	cout << "\nMang sau khi sap xep: ";
	i = 0;
	while (i < n) {
		cout << a[i] << " ";
		i++;
	}
	return 0;
}
