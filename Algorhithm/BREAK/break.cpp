#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char **argv)
{
	int n, sum = 0;
	cout << "n= ";
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		sum += i;
		if (sum >= 10)
			break;
	}
	cout << "Tong= " << sum;
	return 0;
}
