#include <iostream>
using namespace std;

int a(int n)
{
    if (n == 0) return 1;
    if (n == 1) return 0;
    if (n == 2) return -1;
    return 2 * a(n - 1) - 3 * a(n - 2) - a(n - 3);
}

int main ()
{
    int n;
    cin >> n;
    cout << a(n);
    return 0;
}