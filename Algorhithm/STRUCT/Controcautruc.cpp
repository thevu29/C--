#include <iostream>
#include <string.h>
using namespace std;

struct Sinhvien
{
	int ma;
	char ten[100];
};

int main()
{
	Sinhvien a;
	a.ma = 123;
	strcpy(a.ten, "Vu ");
	cout << a.ma << "\t" << a.ten << endl;

	Sinhvien *p;
	p = new Sinhvien;
	p->ma = 234;
	// p.ma = 234; => sai
	strcpy(p->ten, "The Vu ");
	cout << p->ma << "\t" << p->ten << endl;

	Sinhvien *p1 = &a;
	cout << a.ma << "\t" << a.ten << endl;
	p1->ma = 345;
	strcpy(p1->ten, "vu nguyen ");
	cout << p1->ma << "\t" << p1->ten << endl;
	cout << a.ma << "\t" << a.ten << endl;
	return 0;
}
