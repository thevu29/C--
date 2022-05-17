#include <iostream>
#include <math.h>
#include <conio.h>
using namespace std;
struct phanso {
	int a, b, c, d;
};
int main ()
{
	cout << "a= ";
	cin >> a;
	cout << "b= ";
	cin >> b;
	cout << "c= ";
	cin >> c;
	cout << "d= ";
	cin >> d;
	if ( c==0 || d==0 ) { 
		cout << "Mau so phai khac 0 ";
	}
	else {
		cout << "a/b= " << a/b << endl;
		cout << "c/d= " << c/d << endl;
		cout << "Tong 2 phan so = " << a/b + c/d << endl;
		cout << "Hieu 2 phan so = " << a/b - c/d << endl;
		cout << "Tich 2 phan so = " << (a/b) * (c/d) << endl;
		cout << "Thuong 2 phan so = " << (a/b) / (c/d) << endl;
	}
	return 0;
}
