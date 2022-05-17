#include <iostream>
#include <math.h>
using namespace std;

void Dieukien(int a, int b, int c)
{
	if (a == 0) {
		if (b == 0 && c==0) {
			cout << "Pt vo so nghiem ";
		}
		else if (b == 0 & c != 0) {
			cout  << "Pt vo nghiem ";
		}
		else if (b != 0 && c != 0) {
			cout << "Pt co nghiem x = " << -c * 1.0 / b;
		}
	}
	else {
		double delta = b * b - 4 * a * c;
		if (delta > 0) {
			double x1 = (-b + sqrt(delta)) / (2 * a);
			double x2 = (-b - sqrt(delta)) / (2 * a);
			cout << "Pt co 2 nghiem phan biet x1 = " << x1 << " va x2 = " << x2;
		}
		else if (delta == 0) {
			cout << "Pt co nghiem kep x1 = x2 = " << -b *1.0 / (2 * a);
		}
		else {
			cout << "Pt vo nghiem ";
		}
	}
}

int main ()
{
	int a, b, c;	
	cout << "a = ";
	cin >> a;
	cout << "b = ";
	cin >> b;
	cout << "c = ";
	cin >> c;
	Dieukien(a, b, c);
	return 0;
}
