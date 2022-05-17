#include <iostream>
using namespace std;

struct Nhanvien
{
    int sbd, namsinh;
    char ten[100];
};

void Nhap(Nhanvien nv[], int n)
{
    for (int i = 0; i < n; i++) {
        cout << "Nhan vien thu " << i + 1 << ": " << endl;
        cout << "Ma: ";
        cin >> nv[i].sbd;
        cout << "Ho ten: ";
        cin.ignore();
        gets(nv[i].ten);
        cout << "Nam sinh: ";
        cin >> nv[i].namsinh;
    }
}

int main ()
{
    int n, k;
    cin >> n;
    Nhanvien nv[n];
    Nhap(nv, n);
    cin >> k;
    for (int i = 0; i < n; i++) {
        if (nv[i].namsinh == k) {
            cout << "Ma: " << nv[i].sbd << endl;
            cout << "Ho ten: " << nv[i].ten << endl;
            cout << "Nam sinh: " << nv[i].namsinh << endl;
        }
    }
    return 0;
}