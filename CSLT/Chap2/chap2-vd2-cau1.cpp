#include <iostream>
using namespace std;

int main ()
{
	int a=2, b=3;
	int m= a++ > b-- ? --a : b++;
	cout << m+a+b;
	return 0;
}
