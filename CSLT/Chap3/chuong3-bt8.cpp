#include <iostream>
using namespace std;

int main ()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int tuso = 0;
	double mauso = 0;
	double s = 0;
	for (int i = 0; i < n; i++) {
		tuso = i + 1;
		mauso = mauso + 1.0/(i + 1);
		s += tuso / mauso;
		cout << "tu so = " << tuso <<  " " << endl;
		cout << "mau so = " << mauso << " " << endl;
	}
	
	cout << "S(" << n << ") = " << s;
	return 0;
}
