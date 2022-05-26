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

int main ()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	cout << "So nguyen to tu 1 toi " << n << " la: ";
	for (int i = 1; i <= n; i++) {
		if (checkSonguyento(i)) {
			cout << i << " ";
		}
	}
	return 0;
}