#include <iostream>
using namespace std;

int main ()
{
	int a = 20, b = 15;
	int* pa, *pb, tmp;
	pa = &a;
	pb = &b;
	tmp = *pa;
	*pa = *pb;
	*pb = tmp;
	cout << "a = " << a;
	cout << "\nb = " << b;
	cout << "\nDia chi con tro pa = " << pa;
	pa++;
	cout << "\nDia chi con tro pa = " << pa;
	pa -= 2;
	cout << "\nDia chi con tro pa = " << pa << endl;
	return 0;
}
