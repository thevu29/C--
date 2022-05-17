#include <iostream>
using namespace std;

int Giaithua(int n)
{
	if (n <= 1) {
		return 1;
	}
	return n * Giaithua(n - 1);	
}

void ThappanSangNhiphan(int n)
{
	if (n > 0) {
		int a = n % 2;
		ThappanSangNhiphan(n/2);
		cout << a;
	}
}

int main ()
{
	int n;
	cout << "n = ";
	cin >> n;
	cout << n << "! = " << Giaithua(n) << endl;
	cout << n << " doi sang he nhi phan: ";
	ThappanSangNhiphan(n);
	return 0;
}
