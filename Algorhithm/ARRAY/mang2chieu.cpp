#include <iostream>
#include <time.h>
#include <stdlib.h> 
using namespace std;

void Nhapmat(int a[][100], int m, int n)
{
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            //cin >> a[i][j];
            a[i][j] = rand() % 20 + 1;
        }
    }
}

int main ()
{
	srand(time(NULL));
	int column, row;
	cout << "Nhap so dong: ";
	cin >> row;
	cout << "Nhap so cot: ";
	cin >> column;
	//int A[row][column];
	int a[100][100];
	
	//for (int i = 0; i < row; i++) {
		for (int j = 0; j < column; j++){
			A[i][j] = rand() & 100;
		}
	}	 
	
	cout << "Nhap ngau nhien mang:" << endl;
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < column; j++){
			cout << A[i][j] << "\t";
		}
		cout << endl;
	}	 
	
	return 0; 
}
	
	
  
