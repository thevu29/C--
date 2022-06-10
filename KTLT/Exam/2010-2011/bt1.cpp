#include <iostream>
using namespace std;

int Xn(int n)
{
    if (n == 1 || n == 2)   
        return 1;
    return Xn(n - 1) + (n - 1) * Xn(n - 2) + 2011;
}

int Xn1(int n)
{
    if (n == 1 || n == 2)   
        return 1;

    int x = 0, x1 = 1, x2 = 1;
    for (int i = 3; i <= n; i++) 
    {
        x = x2 + (i - 1) * x1 + 2011;
        x1 = x2;
        x2 = x;
    }
    return x;
}

int main ()
{
    int n;
    cin >> n;
    cout << Xn(n) << endl;
    cout << Xn1(n);
    return 0;
}