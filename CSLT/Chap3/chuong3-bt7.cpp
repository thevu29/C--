#include <iostream>
using namespace std;

int main ()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int s = 0;
	int a = 1;
	for (int i = 1; i <= n; i++) {
		a = a * i;
		s += a;
	}
	
	cout << "Tong 1 + 1.2 + 1.2.3 + ... 1.2.3...n = " << s;
	return 0;
}
