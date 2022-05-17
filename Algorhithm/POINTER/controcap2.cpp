#include <iostream>
using namespace std;

int main ()
{
	int** p = new int*[5]; //khai bao va cap phat bo nho cho con tro cap 2 co 5 phan tu, moi phan tu la 1 mang con tro
	for (int i = 0; i < 5; i++) {
		//p[i] = new int[7];	//khai bao va cap phat bo nho cho mang con tro, moi mang co 7 con tro
		* (p + i) = new int[7];
	}
	
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 7; j++) {
			p[i][j] = i + j;	//gan gia tri cho con tro
			//* (* (p + i) + j) = i + j;
		}
	}
	
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 7; j++) {
			cout << p[i][j] << "\t";
			//cout << * (* (p + i) + j) << "\t";
		}
		cout << endl;
	}
	
	//Thu hoi bo nho
	for (int i = 0; i < 5; i++) {
		delete *(p + i);		//dung for de thu hoi bo nho cap phat cho 5 mang con tro
		*(p + i) = NULL;
	}
	delete p; //thu hoi bo nho cua toan bo p
	p = NULL;
	return 0;
}
