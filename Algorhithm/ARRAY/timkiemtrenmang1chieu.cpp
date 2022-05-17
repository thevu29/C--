#include <iostream>
using namespace std;

int main ()
{
	int n;
	cout << "Nhap so phan tu cua mang: ";
	cin >> n;
	int so[n];
	cout << "Nhap cac gia tri trong mang: " << endl;
	for (int i = 0; i < n; i++) {
		cout << "So [" << i << "] = ";
		cin >> so[i];
	}
	
	int k;
	cout << "k = ";
	cin >> k;
	bool c = 0;
	int dem = 0;
	for (int i = 0; i < n; i++) {
		if (so[i] == k) {
			c = 1;
			//break;
			dem++;
		}
	}
	if (c == 1) {
		cout << k << " la so thuoc mang " << endl;
		cout << k << " xuat hien " << dem << " lan trong mang ";
	}
	else {
		cout << k << " khong la so thuoc mang ";
	}
	return 0;
}
