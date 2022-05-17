#include <iostream>
#include <string.h>
using namespace std;

struct Phong
{
    int ma;
    char ten[100];
};

struct Nhanvien
{
    int ma;
    char ten[100];
    Phong p;
};

void Nhap(Nhanvien nv[], int n)
{
    for (int i = 0; i < n; i++) {
        cout << "Nhan vien thu " << i + 1 << ": " << endl;
        cout << "Ma: ";
        cin >> nv[i].ma;
        cout << "Ho ten: ";
        //fflush(stdin);
        //gets(nv[i].ten);
        cin.getline(nv[i].ten, 100);
        cout << "Phong: ";
        fflush(stdin);
        gets(nv[i].p.ten);
        cout << "Ma phong: ";
        cin >> nv[i].p.ma;
    }
}

int main ()
{
    int n;
    char phong[50];
    cin >> n;
    Nhanvien nv[n];
    Nhap(nv, n);
    cout << "Nhap phong muon tim: ";
    fflush(stdin);
    gets(phong);
    for (int i = 0; i < n; i++) {
        if (strcmp(nv[i].p.ten, phong) == 0) {
            cout << "Ma: " << nv[i].ma << endl;
            cout << "Ho ten: " << nv[i].ten << endl;
            cout << "Phong: " << nv[i].p.ten << endl;
            cout << "Ma phong: " << nv[i].p.ma << endl;
        } 
    }
    return 0;
}