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

bool Prime(int x)
{
    if (x < 2)
        return false;
    for (int i = 2; i <= sqrt(x); i++) {
        if (x % i == 0)
            return false;
    }
    return true;
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
    int n;
    cin >> n;
    int *a = new int[n];
    if(!a)  return -1;
    for (int i = 0; i < n; i++) cin >> a[i];
    Solve(a, n);
    printPrime(a, n);
    delete []a;
    return 0;
}