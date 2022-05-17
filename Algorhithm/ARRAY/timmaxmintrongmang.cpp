#include <iostream>
using namespace std;

int main ()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) {
		cout << "Nhap so thu " << (i + 1) << ": ";
		cin >> a[i];
	}
	
	int max = a[0];
	for (int i = 1; i < n; i++ ) {
		if (a[i] > max) {
			max = a[i];
		}
	}
	
	int min = a[0];
	for (int i = 1; i < n; i++) {
		if (a[i] < min) {
			min = a[i];
		}
	}
	
	int sum = 0;
	for (int i = 0; i < n; i++) {
		sum+= a[i];
	}
	
	cout << "Max = " << max << endl;
	cout << "Min = " << min << endl;
	cout << "Sum = " << sum;
	return 0;
}
