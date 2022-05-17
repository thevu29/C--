#include <iostream>
using namespace std;

struct Toado
{
    int x;
    int y;
};

void Nhaptoado(Toado p[], int n)
{
    for (int i = 0; i < n; i++) {
        cout << "Nhap toa do diem thu " << i + 1 << ": ";
        cin >> p[i].x >> p[i].y;
    }
}

void Xuattoado(Toado p[], int n)
{
    for (int i = 0; i < n; i++) {
        cout << "(" << p[i].x << ";" << p[i].y << ") ";
    }
}

void Dem(Toado p[], int n)
{
    int cnt1 = 0, cnt2 = 0, cnt3 = 0;
    for (int i = 0; i < n; i++) {
        if (p[i].y > (-3 * p[i].x - 1) / 4.0)
            cnt1++;
        if (p[i].y < (-3 * p[i].x - 1) / 4.0)
            cnt2++;
        if (3 * p[i].x + 4 * p[i].y + 1 == 0)
            cnt3++;
    }
    cout << "\nSo diem nam phia tren duong thang: " << cnt1 << endl;
    cout << "So diem nam phia duoi duong thang: " << cnt2 << endl;
    cout << "So diem thuoc duong thang: " << cnt3; 
}

int main ()
{
    int n;
    cout << "Nhap n: ";
    cin >> n;
    Toado p[n];
    Nhaptoado(p, n);
    Xuattoado(p, n);
    Dem(p, n);
    return 0;
}