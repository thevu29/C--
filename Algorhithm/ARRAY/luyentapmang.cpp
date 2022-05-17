#include <iostream>
using namespace std;

# define N 5 // khai bao N co 5 phan tu

int main ()
{
	int arr[N];
	int i = 0;
	cout << "Nhap mang: " << endl;
	do {
		cout << "Arr [" << i << "] = ";
		cin >> arr[i];
		
		i++;
	}
	while (i < N);
	cout << endl;
	
	i = N - 1;
	cout << "Mang dao nguoc: " << endl;
	do {
		cout << arr[i] << " ";
		i--;
	}
	while (i >= 0);
	
	/* int i = 0;
	cout << "Nhap mang: " << endl;
	while (i < N) {
		cout << "Arr [" << i << "] = " << " ";
		cin >> arr[i];
		i++;
	}
	cout << endl;

	cout << "Mang dao nguoc: " << endl;
	i = N - 1;
	while (i >= 0) {
		cout << arr[i] << " ";
		i--;
	}*/
	
	/*cout << "Nhap mang: " << endl;
	for (int i = 0; i < N; i++ ) {
		cout << "So [" << i << "] = ";
		cin >> so[i];
	}
	cout << endl;
	
	cout << "Mang xuat nguoc: " << endl;
	for (int i = N - 1; i>=0; i--) {
		cout << so[i] << " ";
	}*/
	
	return 0;
}
