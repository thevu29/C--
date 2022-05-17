#include <iostream>
using namespace std;

int min(int a, int b)
{
	if (a > b) {
		return b;   //return a > b ? b : a
	}
	return a;	
}

int main ()
{
	int c = 5;
	int d = 6;
	cout << min(c, d);
	return 0;
}
