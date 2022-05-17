#include <iostream>
using namespace std;

int main ()
{
	int p = 100;
	int* m = &p;		//m se nhan dia chi cua p chua gia tri 100
	cout << "Dia chi cua p = " << &p << endl;
	cout << "Dia chi cua con tro m = " << m << endl;
	cout << "Gia tri cua p = " << p << endl;
	cout << "Gia tri cua dia chi con tro m dang tro toi = " << *m << endl;
	
	int a = *m;		//a se nhan dc gia tri cua con tro m tro toi
	cout << "a = " << a << endl;
	
	int* x = m;		//con tro x va m se cung quan li 1 o nho
	cout << "Dia chi cua con tro x = " << x << endl; 
	//dia chi cua con tro x se bang dia cho con tro m va bang dia chi cua p vi con tro x va m cung quan li o nho dia chi cua p
	cout << "Gia tri cua dia chi con tro x dang tro toi = " << *x << endl;
	
	*x = 50;
	cout << "Gia tri cua dia chi con tro m dang tro toi = " << *m << endl;		
	//vi gia tri tai dia chi con tro x da thay doi ma con tro m va x cung quan li 1 o nho nen gia tri tai dia chi con tro m tro toi se thay doi
	cout << "Gia tri cua p = " << p << endl;
	//vi con tro m quan li o nho dia chi cua p ma con tro x quan li o nho dia chi con tro m nen gia tri dia chi x tro toi
	//thay doi thi gia tri p se thay doi
	delete m, x;
	return 0;
}
