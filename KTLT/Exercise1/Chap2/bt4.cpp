#include <iostream>
#include <math.h>
using namespace std;

struct Diem
{
    int x, y;
};

struct Dthang
{
    int a, b, c;    //ax + by + c = 0
};

struct Dtron
{
    Diem p;
    int r;
};

int Khoangcach(Dthang d, Dtron c)
{
    float dd;
    dd = abs(d.a * c.p.x + d.b * c.p.y + d.c) / sqrt(pow(d.a, 2) + pow(d.b, 2));
    return dd;
}

int main ()
{
    Dthang d;
    Dtron c;
    cout << "Nhap duong thang: ";
    cin >> d.a >> d.b >> d.c;
    cout << "Nhap toa do tam hinh tron: ";
    cin >> c.p.x >> c.p.y;
    cout << "Nhap ban kinh hinh tron: ";
    cin >> c.r;
    cout << "d: " << d.a << "x + " << d.b << "y + " << d.c << " = 0 " << endl;
    cout << "Duong tron (C): tam O(" << c.p.x << ";" << c.p.y << ") " << "bk R = " << c.r << endl;
    if (Khoangcach(d, c) < c.r)
        cout << "Duong thang cat hinh tron ";
    else if (Khoangcach(d, c) == c.r)
        cout << "Duong thang tiep xuc hinh tron ";
    else    
        cout << "Duong thang nam ngoai hinh tron ";
    return 0;
}