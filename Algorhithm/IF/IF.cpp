#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char **argv)
{
	double a, b, x; // ax + b = 0
	cout << "a= ";
	cin >> a;
	cout << "b= ";
	cin >> b;
	if (a == 0)
	{
		if (b == 0)
		{
			cout << "\nPt co vo so nghiem";
		}
		else
		{
			cout << "\nPt vo nghiem ";
		}
	}
	else
	{
		x = -b / a;
		cout << "\nx= " << x;
	}
	return 0;
}
