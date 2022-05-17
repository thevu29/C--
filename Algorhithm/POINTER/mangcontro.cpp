#include <iostream>
using namespace std;

int main ()
{
	int* p[5];	//mang con tro co 5 phan tu la 5 con tro 
	for (int i = 0; i < 5; i++) {
		p[i] = new int;
		*p[i] = i * 2;
	}
	
	for (int i = 0; i < 5; i++) {
		cout << p[i] << " ==> " << * p[i] << endl; //p[i]: dia chi con tro tro toi, *p[i]: gia tri tai dia chi do
	}
	
	*p[3] = 99;
	for (int i = 0; i < 5; i++) {
		cout << p[i] << " ==> " << * p[i] << endl;
	}
	
	for (int i = 0; i < 5; i++) {
		delete *(p + i);
	}
	return 0;
}
