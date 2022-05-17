#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int Tonghaiso(int a, int b) 
{
	return a + b;
}

void Xuatdulieu(int x)   //ham void la ham kh tra ve gia tri	
{
	cout << x << endl;	
}

void Output() //Ham goi ham
{
	int kq = Tonghaiso(10, 10);
	Xuatdulieu(kq);
}

int main(int argc, char** argv) 
{
	int a, b;
	cout << "a = ";
	cin >> a;
	cout << "b = ";
	cin >> b;
	cout << "Tong " << a << " + " << b << " = " << Tonghaiso(a, b);
	cout << "\n222 + 444 = " << Tonghaiso(222, 444) << endl;
	int kq = Tonghaiso(5, 5);
	Xuatdulieu(kq);
	cout << "Gia tri ham output: ";
	Output();
	return 0;
}
