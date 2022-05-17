#include <iostream>
using namespace std;

int main ()
{
	int n, sum;
	cout << "Nhap n: "; 
	cin >> n;
	int hangdonvi = n % 10;
	int hangchuc = n % 100 / 10;
	int hangtram = n / 100;
	sum = hangdonvi +  hangchuc + hangtram;
	cout << "Tong cac chu so = " << sum;
	return 0;
}
