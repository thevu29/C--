#include <iostream>
using namespace std;

int Fib(int n)
{
    if (n < 1)  
        return 0;
    if (n == 1 || n == 2)
        return 1;
    return Fib(n - 1) + Fib(n - 2);
}

double S(int n)
{
    double s = 0;
    for (int i = 1; i <= n; i++)
        s += i * 1.0 / (1 + Fib(i));
    return s;
}

int main()
{
    int n;
    cin >> n;
    cout << Fib(n) << endl;
    cout << S(n);
    return 0;
}