#include <iostream>
using namespace std;

int An(int n)
{
	if (n == 1) 
		return 1;
	int s = 0;
	for (int i = 1; i < n; i++) {
		s += An(i);
	}
	return s * n;
}

int main ()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	cout << "A" << n << " = " << An(n);
	return 0;	
} 
