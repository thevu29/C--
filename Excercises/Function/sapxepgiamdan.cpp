#include <iostream>
using namespace std;

void NhapDayso(int n, int a[])
{
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
}

void SapxepGiamdan(int n, int a[])
{
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (a[i] < a[j]) {
				int tam = a[i];
				a[i] = a[j];
				a[j] = tam;
			}
		}
	}
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
}

int main ()
{
	int n;
	cin >> n;
	int a[n];
	NhapDayso(n, a);
	cout << "\nDay so sap xep giam dan: ";
	SapxepGiamdan(n, a);
	return 0;
}