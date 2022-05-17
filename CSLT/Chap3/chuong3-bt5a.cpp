#include <iostream>
using namespace std;

int main () 
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int tongcacuoc = 0;
	for (int i = 1; i < n; i++) {
		if (n % i == 0) {
			tongcacuoc += i;
		}
	}
	
	if (tongcacuoc == n) {
		cout << n << " la so hoan chinh ";
	}
	else {
		cout << n << " khong la so hoan chinh ";
	}
	
	return 0;
}
