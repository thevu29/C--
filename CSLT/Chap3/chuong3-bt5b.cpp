#include <iostream>
#include <math.h>
using namespace std;

int main ()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	if (int (sqrt(n)) == sqrt(n)) {
		cout << n << " la so chinh phuong ";
	}
	else {
		cout << n << " khong la so chinh phuong ";
	}
	return 0;
}
