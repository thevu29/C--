#include <iostream>
using namespace std;

int main () 
{
	int n;
	cout << "n = ";
	cin >> n;
	int a[n];
	int i = 0;
	while (i < n) {
		cout << "Nhap a[" << i + 1 << "] = ";
		cin >> a[i];
		if (i > 0 && a[i] <= a[i -1]) {
			continue;
		}
		i++;
	}

	/*for (int i = 0; i < n; i++) {
		cout << "Nhap a[" << i + 1 << "] = ";
		cin >> a[i];
		if (i > 0 && a[i] <= a[i-1]) {
			continue;
		}
	}*/
	
	cout << "Du lieu sau khi nhap: " << endl;
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
	return 0;
}
