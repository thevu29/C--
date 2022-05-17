#include <iostream>
using namespace std;

int main ()
{
	int a=5, b=9;
	int m= a>b ? a++ : b++;
	int n= a<b ? --a : --b;
	cout << --n + (++m);
}
