#include <iostream>
using namespace std;

struct toado
{
    int x;
    int y;
};

void Nhaptoado(toado P[], int n)
{
    for (int i = 0; i < n; i++) {
        cout << "Nhap toa do diem thu " << i + 1 << ": ";
        cin >> P[i].x >> P[i].y;
    }
}

void Xuat(toado P[], int n)
{
    for (int i = 0; i < n; i++) {
        cout << "(" << P[i].x << ";" << P[i].y << ")" << " ";
    }
}

void Dem(toado P[], int n)
{
    int cnt1 = 0, cnt2 = 0, cnt3 = 0, cnt4 = 0, cnt5 = 0;
    for (int i = 0; i < n; i++) {
        if (P[i].x > 0 && P[i].y > 0) 
            cnt1++;
        if (P[i].x < 0 && P[i].y > 0) 
            cnt2++;
        if (P[i].x < 0 && P[i].y < 0) 
            cnt3++;
        if (P[i].x > 0 && P[i].y < 0)
            cnt4++;
        if (P[i].x == 0 || P[i].y == 0)
            cnt5++;
    }
    cout << "\nSo diem nam o phan tu thu I: " << cnt1 << endl;
    cout << "So diem nam o goc phan tu thu II: " << cnt2 << endl;
    cout << "So diem nam o goc phan tu thu III: " << cnt3 << endl;
    cout << "So diem nam o goc phan tu thu IV: " << cnt4 << endl;
    cout << "So diem nam tren 2 truc toa do: " << cnt5;
}

int main ()
{
    int n;
    cout << "Nhap so diem: ";
    cin >> n;
    toado P[n];
    Nhaptoado(P, n);
    cout << "Toa do " << n << " diem lan luot la: ";
    Xuat(P, n);
    Dem(P, n);
    return 0;
}