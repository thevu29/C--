#include <iostream>
using namespace std;

int main ()
{
	
	int n, tam;
	cout << "Nhap n: ";
	cin >> n;
	int daonguoc = 0;
	for (tam = n; n != 0; n = n / 10) {
		daonguoc = daonguoc * 10 + n % 10;
	}
	cout << "Chu so n theo chieu nguoc lai: " << daonguoc << endl;
	if (tam == daonguoc) {
		cout << tam << " la so doi xung ";
	}
	else {
		cout << tam << " khong la so doi xung ";
	}
	return 0;
}
