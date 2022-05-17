#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
	int i=1, sum=0, n;
	cout << "n=";
	cin >> n;
	do {
		sum+=i;
		i++;
	}
	while ( i<=5 );
	cout << "Tong= " << sum;
	return 0;
}
