#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
	int n, sum=0, i=1; 
	cout << "n= ";
	cin >> n;
	while (i <= n) {
		sum += i;
		i++;
	}
	cout << "Tong cac so tu 1 toi " << n << " = " << sum;
	return 0;
}
