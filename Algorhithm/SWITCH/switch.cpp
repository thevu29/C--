#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
	int a, sodu;
	cout << "Nhap a: "; 
	cin >> a;
	sodu = a % 3;
	switch (sodu)
	{
		case 0: 
			cout << a << " la so chan "; 
			break;
		case 1: 
			cout << a << " la so le "; 
			break;
		default: 
			cout << "Nhap sai gia tri "; 
			break;
	}
	return 0;
}
