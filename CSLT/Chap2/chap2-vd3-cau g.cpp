#include <iostream>
using namespace std;

int main ()
{
	int a, b, c, d;
	cout << "a= ";
	cin >> a;
	cout << "b= ";
	cin >> b;
	cout << "c= ";
	cin >> c;
	cout << "d= ";
	cin >> d;
	if ( a!=b && a!=c && a!=d ) { 
		if ( b!=c && b!=d ) {
			if ( c!= d ) { 
				cout << "4 gia tri khac nhau " << endl;
			}
			else {
				cout << "3 gia tri khac nhau " << endl;
			}
		}
		else if ( (b!=c && b==d) || ( b==c && b!=d) ) { 
			if ( c!= d ) { 
				cout << "3 gia tri khac nhau " << endl;
			}
			else {
				cout << "2 gia tri khac nhau " << endl;
			}
		}
		else if ( b==c && b==d ) { 
			cout << "2 gia tri khac nhau " << endl;
		}
	}
	else if ( a==b && a!=c && a!=d ) { 
		if ( c==d ) {
			cout << "2 gia tri khac nhau " << endl;
		}
		else {
			cout << "3 gia tri khac nhau " << endl;
		}
	}
	else if ( a==b && a==c && a!=d ) {
		cout << "2 gia tri khac nhau " << endl;
	}
	else {
		cout << "Khong co gia tri nao khac nhau " << endl;
	}
	return 0;
}
