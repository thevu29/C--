#include <iostream>
using namespace std;

long S(int i, long frac, int n)
{
    if (i > n)  return 0;
    if (i < 0 || frac < 0 || n < 0)  return 0;
    return frac + S(i + 1, frac * (i + 1), n);
}

long S_khdequy(int n) 
{
    long s = 1, p = 1;
    for (int i = 1; i <= n; i++) { 
        p *= i;
        s += p;
    }
    return s;
}

int main ()
{
    int n;
    cin >> n;
    cout << S(0, 1, n) << endl;
    cout << S_khdequy(n);
    return 0;
}