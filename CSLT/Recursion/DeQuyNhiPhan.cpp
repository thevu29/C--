#include <iostream>
using namespace std;

int Fib(int n)
{
	if(n <= 2) 
		return 1;
	return Fib(n -1) + Fib(n - 2); 
}

void XuatdayFib(int n)
{
	for (int i = 1; i <= n; i++) {
		cout << Fib(i) << " "; 
	}	
}
 
int main ()
{
	int n, m; 
	cout << "Nhap n: ";
	cin >> n;
	cout << "Day Fibonacci: ";
	XuatdayFib(n);
	cout << "\nNhap m: ";
	cin >> m;
	cout << "Vi tri thu " << m << " cua day Fibonacci la: " << Fib(m); 
	return 0;	
} 
