#include <iostream>
#include <math.h>
using namespace std;

int main ()     //S(x, n) = 1 - x / (1 + 2) + x^2 / (2 + 3) + ... + (-1)^n * [x^n / n + (n + 1)] 
{
    int n, mau;
    double x, tu;
    cout << "Nhap n: ";
    cin >> n;
    cout << "Nhap x: ";
    cin >> x;
    double s = 0;
    for (int i = 0; i <= n; i++) {
        tu = pow(x, i);
        mau = i + (i + 1);
        s += pow(-1, i) * (tu / mau);
    }
    cout << "S = " << s;
    return 0;
}