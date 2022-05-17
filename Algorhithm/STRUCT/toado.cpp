#include <iostream>
#include <math.h>
using namespace std;

struct Toado
{
    double x;
    double y;
};

double khoangcach(Toado p1, Toado p2)
{
    return sqrt(pow(p1.x - p2.x, 2) + pow(p1.y - p2.y, 2));
}

void Nhap(Toado p3[], int n)
{
    for (int i = 0; i < n; i++) {
        cin >> p3[i].x >> p3[i].y;
    }
}

void Xuat(Toado p3[], int n)
{
    for (int i = 0; i < n; i++) {
        cout << "(" << p3[i].x << ";" << p3[i].y << ")";
        cout << " ";
    }
}

double Tongkhoangcach(Toado p3[], int n)
{
    double s = 0;
    for (int i = 0; i < n; i++) {
        
    }
}

int main ()
{
    Toado p1, p2;
    cin >> p1.x >> p1.y >> p2.x >> p2.y;
    cout << "2 diem: " << "(" << p1.x << ";" << p1.y << ") " << "(" << p2.x << ";" << p2.y << ") " << endl;
    cout << "Khoang cach giua 2 diem = " << khoangcach(p1, p2) << endl;

    int n;
    cin >> n;
    Toado p3[n];
    Nhap(p3, n);
    Xuat(p3, n);
    return 0;
}