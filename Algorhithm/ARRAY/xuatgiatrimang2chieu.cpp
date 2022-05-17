#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;

int main ()
{
	srand(time(NULL));
	int row, col;
	cout << "Nhap so dong: ";
	cin >> row;
	cout << "Nhap so cot: ";
	cin >> col;
	int a[row][col];
	
	cout << "Nhap mang: " << endl;
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			a[i][j] = rand() % 100;
			cout << a[i][j] << "\t";
		}
		cout << endl;
	}
	
	int d;
	cout << "Xuat dong: ";
	cin >> d;
	for (int j = 0; j < col; j++) {
		cout << a[d][j] << "\t";
	}
	cout << endl;
	
	int c;
	cout << "Xuat cot: ";
	cin >> c;
	for (int i = 0; i < row; i++) {
		cout << a[i][c] << "\t";
	}
	cout << endl;
	
	if (row == col) {
		cout << "Duong cheo chinh: " << endl;
		for (int i = 0; i < row; i++) {
			cout << a[i][i] << "\t";
		}
		cout << endl;
		
		cout << "Duong cheo phu: " << endl;
		for (int i = 0; i < row; i++) {
			cout << a[i][col - i -1] << "\t";
		}
	}
	
	return 0;
}
