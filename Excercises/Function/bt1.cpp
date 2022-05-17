#include <iostream>
#include <math.h>
using namespace std;

int Mauso(int n)
{
    int mauso = 0;
    for (int i = 1; i <= n; i++) {
        mauso += i;
    }
    return mauso;
}

int main()
{
    int n, x;
    cout << "Nhap n: ";
    cin >> n;
    cout << "Nhap x: ";
    cin >> x;
    double s1 = 0;     //S(n) = 1 + 1/(1 + 2) + 1/(1 + 2 + 3) + ... + 1/(1 + 2 + ... + n)
    for (int i = 1; i <= n; i++) {
        s1 += 1.0 / Mauso(i);
    }
    cout << "S(" << n << ") = " << s1 << endl;

    double s2 = 0;     //S(x, n) = x + x^2/(1 + 2) + ... + x^n/(1 + 2 + ... + n)
    for (int i = 1; i <= n; i++) {
        int tuso = pow(x, i);
        s2 += (double) tuso / Mauso(i);
    }
    cout << "S(" << x << ", " << n << ") = " << s2;
    return 0;
}