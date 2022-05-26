#include <iostream>
#include <math.h>
using namespace std;

int main() // tinh tich phan bang ct hinh thang: h * s
{
    const double pi = 3.14, e = 2.718;
    int n;
    cin >> n;
    double h = 5 / n;
    double tmp = 0;
    for (int i = 1; i <= n; i++)
    {
        tmp += -1 + i * h;
    }
    double f = 0; // f(x) = (e^x - 2sin(x^2)) / (1 + x^4)
    double s = (pow(e, tmp) - 2 * sin(tmp * tmp)) / (1 + pow(tmp, 4));
    return 0;
}