#include <iostream>
#include <math.h>
using namespace std;

int main ()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int a = n;
	int b = n;
	int d = n;
	int tongluythua = 0;
	int sochuso = 0;
	while (a > 0) {
		a /= 10;
		sochuso++;
	}
		
	for (int i = 1; i <= sochuso; i++) {
		int c = b % 10;
		b /= 10;
		tongluythua += pow(c, sochuso);
	}
		
	if (tongluythua == n) {
		cout << n << " la so armstrong ";
	}
	else {
		cout << n << " khong la so armstrong ";
	}

	int dem = 0;
	for (int i = 1; i <= n; i++) {
		if (tongluythua == i)
			dem++;
	}
	cout << "\nCo " << dem << " so armstrong tu 1 toi " << n;
	return 0;
}

