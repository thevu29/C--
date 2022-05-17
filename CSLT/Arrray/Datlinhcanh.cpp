#include <iostream>
using namespace std;

void NhapMang(int a[], int n)
{
	for (int i = 0; i < n; i++) {
		cout << "Nhap phan tu thu " << i + 1 << ": ";
		cin >> a[i];
	}
}

int Max(int a[], int n)
{
    int max = a[0];
    int c;
    for (int i = 1; i <= n; i++) {
        if (a[i] > max) 
            max = a[i];
    }
    return max;
}

int main ()
{
    int n;
    cout << "Nhap so phan tu mang: ";
	cin >> n;
    int a[n];
	NhapMang(a, n);
    cout << "So lon nhat trong mang: " << Max(a, n);
    return 0;
}