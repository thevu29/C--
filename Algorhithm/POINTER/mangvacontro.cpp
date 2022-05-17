#include <iostream>
using namespace std;

int main ()
{
	int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	for (int i = 0; i < 10; i++) {
		cout << a[i] << " ";
	}
	cout << endl;
	
	int* p = a; 	//kh can ghi &a vi a la mang ma mang la 1 dia chi
	for (int i = 0; i < 10; i++) {
		cout << * (p + i) << " ";
	}
	cout << endl;
	for (int i = 0; i < 10; i++) {
		cout << p[i] << " ";		//co the xuat mang bang con tro theo 2 cach
	}
	cout << endl;
	
	* (p + 3) = 11; //gan gia tri tai dia chi thu 3 con tro p tro toi 
	for (int i = 0; i < 10; i++) {
		cout << a[i] << " ";		//vi p va a quan ly chung 1 dia chi nen gia tri con tro p tro toi thay doi thi tai do a thay doi
	}
	return 0;
}
