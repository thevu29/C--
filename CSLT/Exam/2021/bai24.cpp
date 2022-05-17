#include <iostream>
#include <math.h>
using namespace std;

struct Sophuc
{
    int thuc;
    int ao;
};

int main ()
{
    Sophuc a, b;
    cout << "Nhap so phuc A: ";
    cin >> a.thuc >> a.ao;
    cout << "Nhap so phuc B: ";
    cin >> b.thuc >> b.ao;
    cout << "Tong = " << a.thuc + b.thuc << "+" << a.ao + b.ao << "i " << endl;
    cout << "Hieu = " << a.thuc - b.thuc << "+" << a.ao - b.ao << "i " << endl;
    cout << "Do lon so phuc A: " << sqrt(pow(a.thuc, 2) + pow(a.ao, 2)) << endl;
    cout << "Do lon so phuc B: " << sqrt(pow(b.thuc, 2) + pow(b.ao, 2));
    return 0;
}