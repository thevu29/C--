#include <iostream>
#include <math.h>
using namespace std;

bool Prime(int x)
{
    if (x < 2)
        return false;
    for (int i = 2; i <= sqrt(x); i++)
    {
        if (x % 2 == 0)
            return false;
    }
    return true;
}

void printPrime(int n)
{
    for (int i = 2; i < n; i++)
    {
        if (Prime(i))
            cout << i << " ";
    }
}

int main()
{
    int n;
    cin >> n;
    printPrime(n);
    return 0;
}