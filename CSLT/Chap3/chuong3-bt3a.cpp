#include <iostream>
using namespace std;

int UCLN(int a, int b) {
    if (a == 0 || b == 0)
        return a + b;
        
    while(a != b) {
        if (a > b) {
            a -= b;
        }
		else {
            b -= a;
        }
    }
    return a;
}

int main ()
{
	int a, b;
	cout << "Nhap a: ";
	cin >> a;
	cout << "Nhap b: ";
	cin >> b; 
	cout << "Uoc chung lon nhat cua " << a << " va " << b << " la: " << UCLN(a, b) << endl;
	return 0;
}
