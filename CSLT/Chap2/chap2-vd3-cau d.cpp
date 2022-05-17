#include <iostream>
using namespace std;

int main ()
{
	int a[3];
	for (int i = 0; i < 3; i++) {
		cout << "Nhap so thu " << (i + 1) << ": ";
		cin >> a[i];
	}
	
	int max = a[0];
	for (int i = 1; i < 3; i++) {
		if (a[i] > max) {
			max = a[i];
		}
	}
	
	int min = a[0];
	for (int i = 1; i < 3; i++) {
		if (a[i] < min) {
			min = a[i];
		}
	}
	
	cout << "So lon nhat = " << max << endl;
	cout << "So be nhat = " << min;
 	return 0;
}
/*int a, b, c;
	cout << "a= ";
	cin >> a;
	cout << "b= ";
	cin >> b;
	cout << "c= ";
	cin >> c;
	int max = a;
	int min = c;
	if (b > max) {
		max = b;
	}
	if (b < min) {
		min = b;
	}
	if (c > max) {
		max = c;
	}
	if (a < min) {
		min = a;
	}
	cout << "So lon nhat la: " << max << endl;
	cout << "So be nhat la: " << min; */
