#include <iostream>
#include <math.h>
using namespace std;

int Chuvi(int a, int b, int c)   //AB: a, BC:b, AC:c
{
	return a + b + c;
}

double Dientich(int a, int b, int c)
{
	double p = Chuvi(a, b, c) / 2.0;
	double S = sqrt(p * (p - a) * (p - b) * (p - c));
	return S;
}

bool Kiemtra (int a, int b, int c)
{
	if (a <= 0 || b <= 0 || c <= 0 || a + b <= c || a + c <= b || c + b <= a)
		return false;

	return true;	
}

int main ()
{
	int a, b, c;
	double h;
	cout << "a = ";
	cin >> a;
	cout << "b = ";
	cin >> b;
	cout << "c = ";
	cin >> c;
	if (Kiemtra(a, b, c) == false ) 	{
		cout << "3 canh khong hop le ";
		return -1;
	}
	cout << "Chu vi tam giac = " << Chuvi(a, b, c);
	cout << "\nDien tich tam giac = " << Dientich(a, b, c);
	return 0;
}
