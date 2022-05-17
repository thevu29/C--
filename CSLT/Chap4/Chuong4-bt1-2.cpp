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

int Sochuso(int n)
{
	int sochuso = 0;
	while (n > 0) {
		n /= 10;
		sochuso++;
	}
	return sochuso;
}

bool isArmstrong(int n)
{
	int tongluythua = 0;
	int b = Sochuso(n);
	int a = n;
	while (a > 0) {
		int c = a % 10;
		tongluythua += pow(c, b);
		a /= 10;
	}
	if (tongluythua == n)
		return true;
	return false;
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
	
	int dem = 0;
	for (int i = 1; i <= n; i++) {
		if(isArmstrong(i))
			dem++;
	}
	cout << "\nCo " << dem << " so armstrong 1 toi " << n;
	return 0;
}