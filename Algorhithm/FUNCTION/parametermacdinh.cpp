#include <iostream>
using namespace std;

int Sum(int x, int y = 1)
{
	return x + y;
}
int main ()
{
	int x = 3;
	int y = 2;
	cout << "Tong = " << Sum(x, y); //Sum(x, y): lay gia tri y = 2 thay cho y trong ham Sum
	cout << "\nTong = " << Sum(x); //Sum(x): Kh goi y nen se lay gia tri y = 1 trong ham Sum
	return 0;
}
