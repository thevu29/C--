#include <iostream>
using namespace std;

int X(int n)
{
    if (n < 1)  
        return 0;
    if (n == 1) 
        return 1;
    
    int x = 0;
    for (int i = 1; i <= n; i++)
        x += n * X(n - i);
    return x;
}

int main()
{
    int n;
    cin >> n;
    cout << X(n);
    return 0;  
}