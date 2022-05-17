#include <iostream>
using namespace std;

int ucln(int a, int b)
{
    while (a != 0 && b != 0) {
        if (a > b)
            a %= b;
        else
            b %= a;
    }
    return a + b;
}

int bcnn (int a, int b)
{
    return (a * b) / ucln(a, b);
}

int main ()
{
    int a, b;
    cout << "Nhap vao 2 so nguyen duong: ";
    cin >> a >> b;
    cout << "UCLN = " << ucln(a, b) << endl;
    cout << "BCNN = " << bcnn(a, b);
    return 0;
}
