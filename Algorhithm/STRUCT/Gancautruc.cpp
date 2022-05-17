#include <iostream>
#include <string.h>
using namespace std;

struct Book
{
	char title[50];
	char author[50];
	int page;
	double price;	
};

int main ()
{
	Book A;
	cout << "Thong tin ve sach A " << endl;
	cout << "Ten sach: ";
	gets(A.title);
	cout << "Tac gia sach: ";
	gets(A.author);
	cout << "So trang: ";
	cin >> A.page;
	cout << "Gia sach: ";
	cin >> A.price;
	
	Book B = A;		//khai bao va gan gia tri doi tuong B bang A
	cout << "\nThong tin ve sach B " << endl;
	cout << "Ten sach: " << B.title << endl;
	cout << "Tac gia sach: " << B.author << endl;
	cout << "So trang: " << B.page << endl;
	cout << "Gia sach: " << B.price << endl;

	A.price = 200;
	cout << "Gia sach A: " << A.price << endl;
	cout << "Gia sach B: " << B.price;
	return 0;
}
