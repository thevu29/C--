#include <iostream>
#include <math.h>
using namespace std;

bool checkSonguyento(int n)
{
	if (n < 2)
		return false;
	for (int i = 2; i <= sqrt(n); i++) {
		if (n % i == 0)
			return false;
	}
	return true;
}

int Dem(int n)
{
	int dem = 0;
	for (int i = 1; i <= n; i++) {
		int tmp = i;
		while (tmp > 0) {
			int a = tmp % 10;
			if (checkSonguyento(a)) 
				dem++;
			tmp /= 10;
		}
	}
	return dem;
}

int main () {			
	int n;
	do {
		cout << "Nhap n: ";
		cin >> n;
		if (n > pow(10,4))
			cout << "Nhap n <= 10^4 ";
	} 
	while (n > pow(10, 4)); 
	cout << "Co " << Dem(n) << " so nguyen to co cac chu so cung la so nguyen to tu 1 toi " << n;
	return 0;
}