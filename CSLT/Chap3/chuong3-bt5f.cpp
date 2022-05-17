#include <iostream>
using namespace std;

int main ()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int daonguoc = 0;
	while (n > 0){
		daonguoc = daonguoc * 10 + n % 10;
		n = n / 10;
	}
	cout << "Chu so n theo chieu nguoc lai: " << daonguoc;
	return 0;	
}
