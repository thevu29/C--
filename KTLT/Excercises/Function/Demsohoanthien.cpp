#include <iostream>
#include <math.h>
using namespace std;

bool checkSohoanchinh(int n)
{
	int s = 0;
	for (int i = 1; i < n; i++) {
		if (n % i == 0) 
			s += i;
	}
	if (s == n)
		return true;
	return false;
}

int Dem(int n)
{
	int dem = 0;
	for (int i = 1; i <= n; i++) {
		if (checkSohoanchinh(i))
			dem++;
	}
	return dem;
}

int main () {			
	int n;
	do {
		cout << "Nhap n: ";
		cin >> n;
		if (n > pow(10,4))
			cout << "Nhap n <= 10^4 ";
	} 
	while (n > pow(10, 4));
	cout << "Co " << Dem(n) << " so hoan chinh 1 toi " << n;
	return 0;
}