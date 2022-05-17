#include <iostream>
#include <string.h>
using namespace std;

struct Diachi
{
    char duong[100];
    char quan[100];
    char tinh[100];
};

struct Nhanvien
{
    int ma;
    int tuoi;
    char ten[100];
    Diachi coquan;
    Diachi nha;
};

int main ()
{
    Nhanvien nv1;
    nv1.ma = 1;
    nv1.tuoi = 18;
    strcpy(nv1.ten, "The Vu "); 
    strcpy(nv1.coquan.duong, "20 Phan Huy Ich ");
    strcpy(nv1.coquan.quan, "Quan GV ");
    strcpy(nv1.coquan.tinh, "TP HCM ");
    strcpy(nv1.nha.duong, "20 Quang Trung ");
    strcpy(nv1.nha.duong, "Quan GV ");
    strcpy(nv1.nha.duong, "TP HCM ");
    cout << "Thong tinh nv1: " << endl;
    cout << "Ma: " << nv1.ma << endl;
    cout << "Ho ten: " << nv1.ten << endl;
    cout << "Tuoi: " << nv1.tuoi << endl;
    cout << "Dia chi co quan: " << nv1.coquan.duong << " " << nv1.coquan.quan << " " << nv1.coquan.tinh << endl;

    Nhanvien *nv2 = new Nhanvien;
    nv2 -> ma = 2;
    nv2 -> tuoi = 19;
    strcpy(nv2 -> ten, "Vu The ");
    strcpy(nv2 -> coquan.tinh, "Ha Noi ");
    cout << "\nThong tin nv2: " << endl;
    cout << "Ma: " << nv2 -> ma << endl;
    cout << "Ho ten " << nv2 -> ten << endl;
    cout << "Tuoi: " << nv2 -> tuoi << endl;
    cout << "Dia chi co quan: " << nv2 -> coquan.tinh;
    return 0;
}