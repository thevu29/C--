#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
	int h;
	cout << "Chieu cao: ";
	cin >> h;
	for ( int i=0; i<h; i++ ) {
		for ( int j=0; j<h; j++) {
			if ( j==0 || i==h-1 || j==4 || i==0 ) {
				cout << "*";
			}
			else {
				cout << " ";
			};
		}
		cout << "\n";
	}
	return 0;
}
