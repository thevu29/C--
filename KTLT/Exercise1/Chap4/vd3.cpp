#include <iostream>
using namespace std;

long U(int n)
{
    long s = 0;
    if (n < 6)
        return n;
    for (int i = 5; i > 0; i--)
        s += U(n - i);
    return s;
}

int main()
{
    int n;
    cin >> n;
    cout << 1(n);
    return 0;
}