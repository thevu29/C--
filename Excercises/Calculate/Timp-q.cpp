#include <iostream>
#include <math.h>
using namespace std;

int Tonguocso(int n)
{
	int tong = 0;
	for (int i = 1; i < n; i++) {
		if (n % i == 0)
			tong += i;
	}
	return tong;
}

void Timso(int n)
{
	for (int i = 1; i < n; i++) {
		int z = Tonguocso(i);
		if (z <= n && Tonguocso(z) == i && z > i) {
			cout << "p = " << i << " va q = " << z << endl;
		}
	}
}

int main () {			
	int n;
	do {
		cout << "Nhap n: ";
		cin >> n;
		if (n > pow(10,6))
			cout << "Nhap n <= 10^4 ";
	} 
	while (n > pow(10,6));
	cout << "Cac cap so (p,q) tu 1 toi " << n << ": " << endl;
	Timso(n);
	return 0;
}