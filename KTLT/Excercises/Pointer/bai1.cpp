#include <iostream>
#include <math.h>
using namespace std;

int main ()     //f(x) = a0.x^n + ... + a(n-1).x + an
{
    int n, x;
    cin >> n >> x;
    int *a = new int[n];
    for (int i = 0; i <= n; i++) {
        cin >> *(a + i);
    }
    int f = 0;
    for (int i = 0; i <= n; i++) {
        f += *(a + i) * pow(x, n - i);
    }
    cout << "f = " << f;
    return 0;
}