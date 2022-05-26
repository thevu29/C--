#include <iostream>
#include <math.h>
using namespace std;

int* createA(int n)
{
    int a[100];
    for (int i = 0; i < n; i++) a[i] = i;
    return a;
}

int main()
{
    int n;
    cin >> n;
    cout << createA(n);
    return 0;
}