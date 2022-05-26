#include <iostream>
using namespace std;

struct Phanso
{
	int tu;
	int mau;
};

int ucln(int a, int b)
{
    if (a % b == 0)
        return b;
    return ucln(b, a % b);
}

Phanso Tong(Phanso ps1, Phanso ps2)
{
	Phanso ps;
	ps.tu = ps1.tu * ps2.mau + ps2.tu * ps1.mau;
	ps.mau = ps1.mau * ps2.mau;
	return ps;
}

Phanso Hieu(Phanso ps1, Phanso ps2)
{	
	Phanso ps;
	ps.tu = ps1.tu * ps2.mau - ps2.tu * ps1.mau;
	ps.mau = ps1.mau * ps2.mau;
	return ps;
}

Phanso Toigian(Phanso ps)
{
	int uc = ucln(ps.tu, ps.mau);
	Phanso toigian;
	toigian.tu = ps.tu / uc;
	toigian.mau = ps.mau / uc;
	return toigian;
}

int main ()
{
	Phanso ps1, ps2, tong, hieu;
	cin >> ps1.tu >> ps1.mau >> ps2.tu >> ps2.mau;
	cout << ps1.tu << "/" << ps1.mau << " " << ps2.tu << "/" << ps2.mau << endl;
	tong = Tong(ps1, ps2);
	Phanso toigian = Toigian(tong);
	cout << "Tong 2 ps = " << toigian.tu << "/" << toigian.mau << endl;
	hieu = Hieu(ps1, ps2);
	toigian = Toigian(hieu);
	cout << "Hieu 2 ps = " << toigian.tu << "/" << toigian.mau << endl;
	return 0;
}

