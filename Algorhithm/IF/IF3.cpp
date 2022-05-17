#include <iostream>
using namespace std;

int main()
{
	int a;
	cout << "Nhap a: ";
	cin >> a;
	cout << a << (a % 2 == 0 ? " la so chan " : " la so le ");
	/*if (a % 2 == 0)
		cout << a << " la so chan ";
	else
		cout << a << " la so le ";*/
	return 0;
}
