#include <iostream>
using namespace std;

void Truyenthamtri(int x) //truyen tham tri: doi so sau khi ra khoi ham se tro ve gia tri ban dau
{
	x = x * 2;
	cout << "\nx trong ham truyen tham tri = " << x;
}

void Truyenthambien(int &x) //dau &: dia chi
{							 //truyen tham bien(chieu): doi so sau khi ra khoi ham se lay gia tri vua thay doi
	x = x * 2;
	cout << "\nx trong ham truyen tham bien = " << x;	
}

int main ()
{
	int x = 5;
	cout << "TRUYEN THAM TRI ";
	cout << "\nx truoc khi vao ham truyen tham tri = " << x;
	Truyenthamtri(x);
	cout << "\nx sau khi vao ham truyen tham tri = " << x;
	
	cout << "\nTRUYEN THAM BIEN ";
	cout << "\nx truoc ham truyen tham bien = " << x;
	Truyenthambien(x);
	cout << "\nx sau khi vao ham truyen tham bien = " << x;
	
	return 0;
	
}
