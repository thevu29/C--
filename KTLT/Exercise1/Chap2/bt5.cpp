#include <iostream>
using namespace std;

struct Sinhvien
{
    char mssv[8], ten[30], gioitinh[4], diachi[50];
    float m1, m2, m3, m4, m5, m6;
};

void Nhap(Sinhvien &sv)
{
    cout << "Nhap mssv: ";
    cin.getline(sv.mssv, 8);
    cout << "Nhap ho ten sv: ";
    cin.getline(sv.ten, 30);
    cout << "Nhap gioi tinh: ";
    cin.getline(sv.gioitinh, 5);
    cout << "Nhap dia chi: ";
    cin.getline(sv.diachi, 50);
    cout << "Nhap diem 6 mon: ";
    cin >> sv.m1 >> sv.m2 >> sv.m3 >> sv.m4 >> sv.m5 >> sv.m6;
}

void Xuat(Sinhvien sv)
{
    cout << "\n\tTHONG TINH SV: " << endl;
    cout << "Mssv: " << sv.mssv << endl;
    cout << "Ho ten: " << sv.ten << endl;
    cout << "Gioi tinh: " << sv.gioitinh << endl;
    cout << "Dia chi: " << sv.diachi << endl;
    cout << "Diem mon 1: " << sv.m1 << endl;
    cout << "Diem mon 2: " << sv.m2 << endl;
    cout << "Diem mon 3: " << sv.m3 << endl;
    cout << "Diem mon 4: " << sv.m4 << endl;
    cout << "Diem mon 5: " << sv.m5 << endl;
    cout << "Diem mon 6: " << sv.m6;
}

int main ()
{
    Sinhvien sv;
    Nhap(sv);
    Xuat(sv);
    return 0;
}
