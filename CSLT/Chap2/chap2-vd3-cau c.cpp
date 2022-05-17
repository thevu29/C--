#include <iostream>
#include <math.h>
using namespace std;

int main ()
{
	int xA, yA, xB, yB, xC, yC, toadotrongtam;
	float AB, AC, BC, cv;
	cout << "xA= "; cin >> xA;
	cout << "yA= "; cin >> yA;
	cout << "xB= "; cin >> xB;
	cout << "yB= "; cin >> yB;
	cout << "xC= "; cin >> xC;
	cout << "yC= "; cin >> yC;
	AB = sqrt( pow(xB - xA, 2) + pow(yB - yA, 2) );
	AC= sqrt( pow(xC - xA, 2) + pow(yC - yA, 2) );
	BC = sqrt( pow(xC - xB, 2) + pow (yC - yB, 2) );
	cout << BC << endl;
	cv = AB + AC + BC;
	float p = cv / 2;
	float dientich = sqrt(p * (p - AB) * (p - AC) * (p - BC));
	cout << "Chu vi tam giac= " << cv << endl;
	cout << "Dien tich tam giac= " << dientich << endl;
	float xG= ( xA + xB + xC) / 3;
	float yG= ( yA + yB + yC) / 3;
	cout << "Toa do trong tam tam giac: " << "(" <<xG << ";" << yG << ")";
	return 0;
}

