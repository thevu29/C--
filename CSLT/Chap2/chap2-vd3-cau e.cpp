#include <iostream>
using namespace std;

#define n 3

int main ()
{
	int so[n];
	cout << "Nhap 3 so nguyen: " << endl;
	for (int i = 0; i < n; i++) {
		cout << "So [" << i << "] = ";
		cin >> so[i];
	}

	for (int i = 0; i < (n - 1); i++) {
		for (int j = i + 1; j < n; j++) {
			if (so[i] > so[j]) {
				int tam = so[i];
				so[i] = so[j];
				so[j] = tam;
			}
		}
	}
	
	cout << "3 so theo chieu tang dan: ";
	for (int i = 0; i < n; i++) {
		cout << so[i] << " ";
	}
	return 0;
}
