#include <iostream>
using namespace std;
int main ()
{
	int n, sum=0, i;
	cout << "n= ";
	cin >> n;
	for ( i=1; i<=n; i++ ) {
		sum+=i;
	}
	cout << "Tong= " << sum;
	return 0;
}
