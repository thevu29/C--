#include <iostream>
using namespace std;

long Giaithua(int n)
{
	if (n <= 1)
		return 1;
	return n * Giaithua(n - 1); 
}

int main ()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	cout << n << "! = " << Giaithua(n); 
	return 0;	
} 
