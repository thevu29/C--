#include <iostream>
#include <math.h>
using namespace std;

int isPrime(int n)    
{
    if (n < 2)
        return false;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}

int dxungtrc(int m)
{
    int trc;
    for (int i = m - 1; i >= 2; i--) {
        if (isPrime(i)) {
            trc = i;
            break;
        }
    }
    return trc;
}

int dxungsau(int m)
{
    int sau;
    while (true) {
        m++;
        if (isPrime(m)) {
            sau = m;
            break;
        }
    }
    return sau;
}

void dem(int n)
{
    int cnt = 0;
    for (int i = 1; i <= n; i++) {
        if (isPrime(i)) {
            double tbc = (dxungtrc(i) + dxungsau(i)) / 2.0;
            if (tbc == i)
                cout << i << " ";
        } 
    }
}

int main ()     
{
    int n;
    cout << "n = ";
    cin >> n;
    int a[n];
    dem(n);
    return 0;
}