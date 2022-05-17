#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;

int main() // ma tran cap m x n
{
	srand(time(NULL));
	int m, n;
	cout << "Nhap so dong: ";
	cin >> m;
	cout << "Nhap so cot: ";
	cin >> n;
	int a[m][n];
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			a[i][j] = rand() % 100;
		}
	}

	cout << "Ma tran cap " << m << " x " << n << ": " << endl;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << a[i][j] << "\t";
		}
		cout << endl;
	}

	int b[n][m];
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			b[j][i] = a[i][j];
		}
	}

	cout << "Ma tran chuyen vi: " << endl;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout << b[i][j] << "\t";
		}
		cout << endl;
	}

	return 0;
}
