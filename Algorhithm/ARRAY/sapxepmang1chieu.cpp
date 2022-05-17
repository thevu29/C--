#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;

#define n 5

int main () //sap xep theo kieu bubble sort
{
	srand(time(NULL));
	int so[n];
	cout << "Cac gia tri cua mang: " << endl;
	for (int i = 0; i < n; i++) {
		so[i] = rand() % 100;
		cout << so[i] << " ";
	}
	
	for (int i = 0; i < (n - 1); i++) {
		for (int j = i + 1; j < n; j++ ) {
			if (so[i] > so[j]) {
				int tam = so[i];
				so[i] = so[j];
				so[j] = tam;
			}
		}
	}
	cout << endl;
	cout << "Mang sau khi sap xep: " << endl;
	
	for (int i = 0; i < n; i++) {
		cout << so[i] << " ";
	}
	return 0;
}
