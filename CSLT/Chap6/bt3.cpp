#include <iostream>
#include <string.h>
using namespace std;

struct thongtin
{
    char ten[100];
    int msv;
    double cb, cn1, cn2;
};

void Nhapthongtin(thongtin a[], int n)
{
    cout << "Nhap thong tin: " << endl;
    for (int i = 0; i < n; i++) {
        cout << "Nhap ma so sinh vien: ";
        cin >> a[i].msv;
        cin.ignore();
        cout << "Nhap ho ten: ";
        gets(a[i].ten);
        cout << "Nhap diem mon co ban: ";
        cin >> a[i].cb;
        cout << "Diem mon chuyen nganh 1: ";
        cin >> a[i].cn1;
        cout << "Diem mon chuyen nganh 2: ";
        cin >> a[i].cn2;
    }
}

void Xuathongtin(thongtin a[], int n)
{
    for (int i = 0; i < n; i++) {
        cout << "\nThong tin thi sinh thu " << i + 1 << ": " << endl;
        cout << "Ho ten: " << a[i].ten << endl;
        cout << "Ma so sinh vien: " << a[i].msv << endl;
        cout << "Diem mon co ban: " << a[i].cb << endl;
        cout << "Diem mon chuyen nganh 1: " << a[i].cn1 << endl;
        cout << "Diem mon chuyen nganh 2: " << a[i].cn2 << endl;
        cout << "Diem tong 3 mon: " << a[i].cb + a[i].cn1 + a[i].cn2 << endl;
    }
}

int main ()
{
    int n;
    cout << "Nhap so thi sinh: ";
    cin >> n;
    thongtin a[n];
    Nhapthongtin(a, n);
    Xuathongtin(a, n);
    return 0;
}