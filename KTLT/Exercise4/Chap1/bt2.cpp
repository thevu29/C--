#include <iostream> 
using namespace std;

int X(int n)
{
    if (n < 1)
        return 0;
    if (n == 1 || n == 2)
        return 1;
    return X(n - 1) + (n - 1) * X(n - 2);
}

int X1(int n)
{
    if (n < 1)
        return 0;
    if (n == 1 || n == 2)
        return 1;
        
    int x = 0, x1 = 1, x2 = 1;
    for (int i = 3; i <= n; i++)
    {
        x = x2 + (i - 1) * x1;
        x1 = x2;
        x2 = x;
    }
    
    return x;
}

int main()
{
    int n;
    cin >> n;
    cout << X(n) << endl;
    cout << X1(n);
    return 0;
}