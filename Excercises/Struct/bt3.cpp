#include <iostream>
#include <string.h>
using namespace std;

struct Diachi
{
    char duong[50];
    char quan[50];
    char tinh[50];  
};

struct Sinhvien
{
    int ma;
    char ten[50];
    Diachi nha;
};

void Nhap(Sinhvien sv[], int n)
{
    for (int i = 0; i < n; i++) {
        cout << "Nhan vien thu " << i + 1 << ": " << endl;
        cout << "Ma: ";
        cin >> sv[i].ma;
        cout << "Ho ten: ";
        fflush(stdin);
        gets(sv[i].ten);
        /*cout << "Dia chi nha: " << endl;
        cout << "Duong: ";
        fflush(stdin);
        gets(sv[i].nha.duong);
        cout << "Quan: ";
        fflush(stdin);
        gets(sv[i].nha.quan);*/
        cout << "Tinh thanh: ";
        fflush(stdin);
        gets(sv[i].nha.tinh);
    }
}

int main ()
{
    int n;
    cin >> n;
    Sinhvien sv[n];
    Nhap(sv, n);
    cout << "\nSinh vien co cung tinh thanh: " << endl;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (strcmp(sv[i].nha.tinh, sv[j].nha.tinh) == 0) 
                cout << sv[i].ten << " " << sv[j].ten << " ";
        }
    }
    return 0;
}