#include <iostream>
#include <math.h>
using namespace std;

int main ()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int flag = 1;
	if (n < 2) {
		cout << n << " khong la so nguyen to ";
	}
	else  {
		for (int i = 2; i <= sqrt(n); i++) {
			if (n % i == 0) {
				flag = 0;
				break;
			}
		}
	}
	
	if (flag == 1) {
		cout << n << " la so nguyen to ";
	}
	else {
		cout << n << " khong la so nguyen to ";
	}

	return 0;
}
