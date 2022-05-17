#include <iostream>
using namespace std;

int ucln(int m, int n)	//giai thuat Euclid
{
	if (m % n == 0)
		return n;
	return ucln(n, m % n);
}

/*int ucln(int a, int b)
{
	while (a * b != 0) {
		if (a  > b)
			a %= b;
		else 
			b %= a;
	}
	return a + b;
}*/

int main ()
{
	int a, b;
	cout << "a = ";
	cin >> a;
	cout << "b = ";
	cin >> b;
	cout << "Uoc chung lon nhat cua " << a << " va " << b << " = " << ucln(a, b);
	return 0;
}