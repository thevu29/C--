#include <iostream>
using namespace std;

int F(int n)
{
    if (n <= 2)
        return 1;
    return F(n - 1) + F(n - 2);
}

double S(int n)
{
    if (n == 1)
        return 1.0 / 2;
    return n * 1.0 / (1 + F(n)) + S(n - 1);
}

int F_khdequy(int n)
{
    if (n <= 2)
        return 1;
    int f, f1 = 1, f2 = 1;

    for (int i = 3; i <= n; i++)
    {
        f = f1 + f2;
        f1 = f2;
        f2 = f;
    }
    
    return f;
}

double S_khdequy(int n)
{
    double s = 0;
    for (int i = 1; i <= n; i++)
    {
        s += (i * 1.0) / (1 + F_khdequy(i));
    }
    return s;
}

int main()
{
    int n;
    cin >> n;
    cout << "f" << n << " = " << F(n) << endl;
    cout << "S" << n << " = " << S(n) << endl;
    cout << "f" << n << " kh de quy = " << F_khdequy(n) << endl;
    cout << "S" << n << " kh de quy = " << S_khdequy(n) << endl;
    return 0;
}