#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

void Play()
{
	int songaunhien = rand() % 100 + 1;
	int solandoan = 0;
	int sodoan;
	do {
		solandoan++;
		cout << "Doan lan thu " << solandoan << ". Ban doan so: ";
		cin >> sodoan;
		if (sodoan == songaunhien && solandoan < 7) {
			cout << "Ban da doan trung. So ngau nhien la: " << songaunhien;
			break;
		}
		if (sodoan > songaunhien && solandoan < 7) {
			cout << "So ban doan > so ngau nhien " << endl;
		}
		else {
			cout << "So ban doan < so ngau nhien " << endl;
		}
		if (solandoan == 7) {
			cout << "Da het luot choi. GAME OVER!! ";
			cout << "\nSo ngau nhien la: " << songaunhien << endl;
			break;
		}
	}
	while ( true );
}

void Tieptuc()
{
	while (true) {
		Play();
		char c;
		cout << "Ban co muon choi tiep ? Nhap \"c\" neu muon choi tiep, \"k\" neu khong: ";
		cin >> c;
		if (c == 'k')
			break;
	}
	
	cout << "\nCam on ban da choi ";
}

int main ()
{
	srand(time(NULL));
	cout << "CHUONG TRINH CHOI GAME DOAN SO " << endl;
	//Play();
	Tieptuc();
	return 0;
}
