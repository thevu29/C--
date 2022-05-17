#include <iostream>
#include <math.h>
using namespace std;

struct Diem
{
    int x, y;
};

struct Dtron
{
    Diem p;
    int r;
};

int main ()
{
    float d;
    Diem a;
    Dtron c;
    cout << "Nhap toa do diem: ";
    cin >> a.x >> a.y;
    cout << "Nhap toa do tam hinh tron: ";
    cin >> c.p.x >> c.p.y;
    cout << "Nhap ban kinh hinh tron: ";
    cin >> c.r;
    cout << "Diem A(" << a.x << ";" << a.y << ")" << endl;
    cout << "Duong tron (C): tam O(" << c.p.x << ";" << c.p.y << ") " << "bk R = " << c.r << endl;
    d = sqrt(pow(a.x - c.p.x, 2) + pow(a.y - c.p.y, 2));
    if (d > c.r)
        cout << "Diem nam ngoai hinh tron ";
    else 
        cout << "Diem nam trong hinh tron ";
    return 0;
}