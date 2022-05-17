#include <iostream>
using namespace std;

int main ()
{	
	int a = 5;
	float b = 4.5;
	int* pa = &a;
	float* pb = &b;		//*pa = b se bi loi vi kh cung kieu du lieu
	
	void *p;	//con tro void co the tro den bat ky kieu du lieu na
	p = &a;	
	(*(int*) p) = 10;	//ep kieu p thanh int
	cout << "a = " << a << endl;
	p = &b;
	(*(float*) p) = 10.5;	//ep kieu p thanh float
	cout << "b = " << b;
	
	/*int* c;		//con tro kh dc cap phat bo nho la con tro null
	cout << "Gia tri cua o nho ma c tro toi = " << *c;*/	//neu khong cap phat bo nho thi se bi loi run error
	int* c = new int;
	cout << "\nGia tri cua o nho ma c tro toi = " << *c;	//se tra ve gia tri bat ki
	*c = 9;	
	cout << "\nGia tri cua o nho ma c tro toi = " << *c;
	return 0;
}
