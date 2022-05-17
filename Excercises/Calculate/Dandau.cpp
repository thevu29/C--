#include <iostream>
#include <math.h>
using namespace std;

int main ()			//Tinh S(x, n) = -x + x^2/2! - x^3/3! + ... + (-1)^n x^n/n!
{
	int x, n;
	cout << "Nhap x: ";
	cin >> x;
	cout << "Nhap n: ";
	cin >> n;
	double tuso;
	int mauso = 1;
	double s = 0;
	for (int i = 1; i <= n; i++) {
		tuso = pow(x, i);
		mauso = mauso * i;
		s += pow(-1, (double) i) * (tuso / mauso);
	}
	cout << "Tong = " << s;
	return 0;
}