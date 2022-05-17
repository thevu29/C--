#include <iostream>
using namespace std;

void NhapMang(int a[], int n)
{
	for (int i = 0; i < n; i++) {
		cout << "Nhap phan tu thu " << i << ": ";
		cin >> a[i];
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

int main ()
{
	int n, a[n], k;
	cout << "Nhap so phan tu mang: ";
	cin >> n;
	NhapMang(a, n);
    cout << "\nNhap so de tim: ";
	cin >> k;
    int tk = Timkiem(a, n, k);
	if (tk != -1) {
		cout << "Tim thay " << k << " trong mang tai vi tri thu " << tk;
	}
	else {
		cout << "Khong tim thay " << k << " trong mang ";
	}
    return 0;
}