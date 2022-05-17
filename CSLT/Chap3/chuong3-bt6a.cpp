#include <iostream>
#include <math.h>
using namespace std;

bool kiemtra (int n)
{
	if (n < 2) 
		return false;
	for (int i = 2; i <= sqrt(n); i++) {
		if (n % i == 0) 
			return false;
	}
	return true;
}

int demso (int n) 
{
	int dem1 = 0;
	for (int i = 1; i <= n; i++) {
		if (kiemtra(i) == true) 
			dem1++;
	}
	return dem1;
}

int main ()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	cout << "So luong so nguyen to <= " << n << ": " << demso(n);
	return 0;
}
