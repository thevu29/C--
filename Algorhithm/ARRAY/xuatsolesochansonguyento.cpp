#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;

int main () 
{
	srand(time(NULL));
	int n;
	cout << "Nhap so phan tu cua mang: ";
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) {
		a[i] = rand() % 100;
	}
	
	cout << "Xuat ra mang: " << endl;
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
	
	int sole = 0;
	cout << "\nCac so le cua mang: ";
	for (int i = 0; i < n; i++) {
		if (a[i] % 2 == 1) {
			cout << a[i] << " ";
			sole++;
		}
	}
	cout << "\nCo " << sole << " so le trong mang ";
	
	int sochan = 0;
	cout << "\nCac so chan cua mang: ";
	for (int i = 0; i < n; i++) {
		if (a[i] % 2 == 0) {
			cout << a[i] << " ";
			sochan++;
		}
	}
	cout << "\nCo " << sochan << " so chan trong mang ";
	
	cout << "\nCac so nguyen to cua mang: ";
	int songuyento = 0;
	for (int i = 0; i < n; i++) {
        int dem = 0;
		for (int j = 1; j <= a[i]; j++) {
			if (a[i] % j == 0) {
				dem++;
			}
		}
		if (a[i] >= 2 && dem == 2) {
			cout << a[i] << " ";
			songuyento++;
		}
	}
	cout << "\nCo " << songuyento << " so nguyen to trong mang ";
	return 0;
}
