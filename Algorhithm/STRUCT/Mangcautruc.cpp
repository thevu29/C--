#include <iostream>
#include <string.h>
using namespace std;

struct Sinhvien
{
	int mssv;
	char ten[250];
};

void Nhapmang(Sinhvien dssv[], int siso) //tao mang cau truc dssv co 2 bien thanh vien la mssv va ten
{
	for (int i = 0; i < siso; i++) {
		cout << "Sinh vien thu " << i + 1 << endl;
		/*cout << "Ho va ten: ";
		gets(dssv[i].ten);
		cin.ignore();*/
		cout << "Nhap mssv: ";
		cin >> dssv[i].mssv;
		cin.ignore();		//xoa ky tu dau tien
		cout << "Ho va ten: ";
		gets(dssv[i].ten);
	}
}

void Xuatmang(Sinhvien dssv[], int siso)
{
	for (int i = 0; i < siso; i++) {
		cout << dssv[i].ten << "\t" << dssv[i].mssv << endl;
	}
}

int main ()
{
	int siso;
	cout << "Nhap si so lop: ";
	cin >> siso;
	Sinhvien dssv[siso];
	Nhapmang(dssv, siso);
	Xuatmang(dssv, siso);
	return 0;
}
