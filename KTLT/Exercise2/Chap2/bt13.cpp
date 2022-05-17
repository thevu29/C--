#include <iostream>
#include <math.h>
using namespace std;

void Generation(int *a, int n)
{
    a[n - 1]++;
    for (int i = n - 1; i > 0; i--) {
        if (a[i] > 1) {
            a[i - 1]++;
            a[i] -= 2;
        }
    }
}

void Output(int *a, int n)
{
    for (int i = 0; i < n; i++)
        cout << a[i];
    cout << endl;
}

void Print(int *a, int n)
{
    for (int i = 0; i < n; i++) a[i] = 0;

    for (int i = 0; i < pow(2, n); i++) {
        Output(a, n);
        Generation(a, n);
    }
}

int main ()
{
    int n, *a;
    cin >> n;
    a = new int[n];
    if(!a)  return -1;
    Print(a, n);

    delete []a;
    return 0;
}