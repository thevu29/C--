#include <iostream>
using namespace std;

int tinhXn(int n);
int tinhYn(int n);

int tinhXn(int n)
{
	if (n == 0)
		return 1;
	return tinhXn(n - 1) + tinhYn(n - 1);
}

int tinhYn(int n)
{
	if (n == 0)
		return 0;
	return 3 * tinhXn(n - 1) + 2 * tinhYn(n - 1);
}

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	if (n < 0)
	{
		cout << "Phai nhap n > 0 ";
	}
	else
	{
		cout << "X" << n << " = " << tinhXn(n) << endl;
		cout << "Y" << n << " = " << tinhYn(n);
	}
	return 0;
}
