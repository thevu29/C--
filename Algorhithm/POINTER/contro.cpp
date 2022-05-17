#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
	int* p;
	p = new int;	//cap phat bo nho cho co tro b, neu kh cap phat thi con tro se bi null
	*p = 100;		//gan gia tri = 100 tai o nho ma b tro toi
	cout << "Dia chi tai con tro = " << p << endl;
	cout << "Gia tri tai dia chi ma con tro b tro toi = " << *p;
	delete p;	//thu hoi bo nho neu kh con su dung, neu kh thu hoi se bi memory leak
	return 0;
}
