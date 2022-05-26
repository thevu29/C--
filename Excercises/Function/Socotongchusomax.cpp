#include <iostream>
#include <math.h>
using namespace std;

int demchuso(int n)
{
	int dem = 0;
	while (n > 0) {
		int a = n % 10;
		dem++;
		n /= 10;
	}
	return dem;
}

int SocoTongchusoMax(int n)
{
	if (demchuso(n) == 5)
		return pow(10, 4);
	else if (demchuso(n) == 1)
		return n;
	else if(demchuso(n) == 2) {
		int a = (n / 10) - 1;
		return (a * 10) + 9;
	}
	else if (n == 99)
		return 99;
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
	cout << "So nguyen duong <= " << n << " co tong chu so lon nhat la: " << SocoTongchusoMax(n);
	return 0;
}
