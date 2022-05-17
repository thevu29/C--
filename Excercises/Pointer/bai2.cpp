#include <iostream>
#include <math.h>
using namespace std;

void Nhap(int *p, int n)
{
    for (int i = 1; i <= n; i++)
    {
        cin >> *(p + i);
    }
}

int main()
{
    int n;
    cin >> n;
    int *p = new int[n];
    int *q = new int[n];
    Nhap(p, n);
    Nhap(q, n);
    double d = 0;
    for (int i = 1; i <= n; i++)
    {
        d += pow(*(q + i) - *(p + i), 2);
    }
    cout << "Khoang cach giua 2 vecto = " << sqrt(d);
    return 0;
}