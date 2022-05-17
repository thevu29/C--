#include <iostream>
using namespace std;

int main()
{
	double dtb;
	cout << "dtb = ";
	cin >> dtb;
	if (dtb < 0 || dtb > 10)
		cout << "Nhap sai ";
	else
	{
		if (dtb >= 5)
			cout << "Dau ";
		else
			cout << "Rot ";
	}
	return 0;
}
