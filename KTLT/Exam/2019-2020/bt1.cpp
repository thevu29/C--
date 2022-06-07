#include <iostream>
using namespace std;

int X(int n)
{
    if (n < 1)
        return 0;
    if (n == 1) 
        return 1;
    
    int s = 0;
    for (int i = 1; i < n; i++)
        s += X(n - i);
    return n + s;
}

int X1(int n)
{
    int x[100];
    for (int i = 1; i <= n; i++)
    {
        x[i] = i;
        for (int j = i - 1; j >= 1; j--)
            x[i] += x[j];
    }
    return x[n];
}

int main ()
{
    int n;
    cin >> n;
    cout << X(n) << endl;
    cout << X1(n);
    return 0;
}

