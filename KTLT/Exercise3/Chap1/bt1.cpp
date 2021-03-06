#include <iostream>
using namespace std;

int X(int n);
int Y(int n);

int X(int n)
{
    if (n == 0)
        return 1;
    return X(n - 1) / 3 + Y(n - 1) / 2 + 27;
}

int Y(int n)
{
    if (n == 0)
        return 2;
    return X(n - 1) / 5 + Y(n - 1) / 7 + 11;
}

void XY(int n)
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
    cout << "x" << n << " = " << X(n) << endl;
    cout << "y" << n << " = " << Y(n) << endl;
    XY(n);
    return 0;
}