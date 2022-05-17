#include <iostream>
#include <math.h>
using namespace std;

int main ()			//Tih S = √(1+√(2+√(3+⋯+ √((n-1)+√n)) ) ) 
{
	int n;
	do {
		cout << "Nhap n (n>= 1): ";
		cin >> n;
	}
	while (n < 1);
	double s = 0;
	int i = n;
	while (i > 0) {
		s = sqrt(i + s);
		i--;
	}
	cout << "Tong = " << s;
	return 0;
}