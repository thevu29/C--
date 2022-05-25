#include <iostream>
using namespace std;

int Tinh_x(int n);
int Tinh_y(int n);

int Tinh_x(int n)
{
    if (n == 0)
        return 1;
    return Tinh_x(n - 1) / 3 + Tinh_y(n - 1) / 2 + 27;
}

int Tinh_y(int n)
{
    if (n == 0)
        return 2;
    return Tinh_x(n - 1) / 5 + Tinh_y(n - 1) / 7 + 11;
}

void Tinh_xy_khdequy(int n)
{

    int x, y, x0, y0;
    x0 = 1, y0 = 2;

    for (int i = 1; i <= n; i++)
    {
        x = x0 / 3 + y0 / 2 + 27;
        y = x0 / 5 + y0 / 7 + 11;
        x0 = x;
        y0 = y;
    }
    
    cout << "x" << n << " kh de quy = " << x << endl;
    cout << "y" << n << " kh de quy = " << y << endl;
}

int main()
{
    int n;
    cin >> n;
    cout << "x" << n << " = " << Tinh_x(n) << endl;
    cout << "y" << n << " = " << Tinh_y(n) << endl;
    Tinh_xy_khdequy(n);
    return 0;
}