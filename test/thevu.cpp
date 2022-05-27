#include <iostream>
#include <math.h>
using namespace std;

int X(int n)
{
    if (n < 0)
        return 0;
    if (n == 0 || n == 1)
        return 1;
    
    int x = 0;
    for (int i = n; i > 0; i--)    
        x += i * X(n - i);
    return x;
}

int main()
{
    int n;
    cin >> n;
    cout << X(n);
    return 0;
}