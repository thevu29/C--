#include <iostream>
using namespace std;

int Thetich(int d, int r, int h)
{
    return d * r * h;
}

int main ()
{
    int d, r, h;
    cout << "Nhap chieu dai: ";
    cin >> d;
    cout << "Nhap chieu rong: ";
    cin >> r;
    cout << "Nhap chieu cao: ";
    cin >> h;
    cout << "The tich hinh hop chu nhat = " << Thetich(d, r, h);
    return 0;
}