#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char **argv)
{
	int n;
	cout << "n = ";
	cin >> n;
	int sum = 0;
	for (int i = 1; i <= n; i++)
	{
		if (i == 2 || i == 4)
			continue;
		sum += i;
	}
	cout << "sum = " << sum;
	/*int i = 0;
	do {
		i++;
		if ( i==2 || i==4 )
			continue;
		sum+= i;
	}
	while ( i<n );
	cout << "Tong = " << sum;*/
	return 0;
}
