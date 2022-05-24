#include <iostream>
#include <math.h>
using namespace std;

void Solve(int *a, int n)
{
    int s1 = 0, s2 = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] < 0)   
            s1 += a[i];
        else    
            s2 += a[i];
    }
    cout << s1 << " " << s2 << endl;
}

int Prime(int x)
{
    if (x < 2)
        return 0;
    for (int i = 2; i <= sqrt(x); i++) {
        if (x % i == 0)
            return 0;
    }
    return 1;
}

void printPrime(int *a, int n)
{
    for (int i = 0; i < n; i++) {
        if (Prime(a[i]))
            cout << a[i] << " ";
    }
}

int main ()
{
    int n, a[100];
    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];
    Solve(a, n);
    printPrime(a, n);
    return 0;
}