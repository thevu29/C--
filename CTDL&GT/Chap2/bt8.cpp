#include <iostream>
using namespace std;

int findMax(int a[], int n)
{
    int max = a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] > max)
            max = a[i];
    }
    return max;
}

void CountingSort(int a[], int b[], int n, int max)
{
    int c[max];
    for (int i = 0; i <= max; i++)   c[i] = 0;
    for (int i = 0; i < n; i++)      c[a[i]]++;
    for (int i = 1; i <= max; i++)   c[i] += c[i - 1];
    for (int i = n - 1; i >= 0; i--) {
        b[c[a[i]] - 1] = a[i];
        c[a[i]]--;
    }
}

void CountingSort_Giam(int a[], int b[], int n, int max)
{
    int c[max];
    for (int i = 0; i <= max; i++)   c[i] = 0;
    for (int i = 0; i < n; i++)      c[a[i]]++;
    for (int i = 1; i <= max; i++)   c[i] += c[i - 1];
    for (int i = n - 1; i >= 0; i--) {
        b[n - c[a[i]]] = a[i];
        c[a[i]]--;
    }
}

int main ()
{
    int n, a[100], b[100];
    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];
    CountingSort_Giam(a, b, n, findMax(a, n));
    for (int i = 0; i < n; i++) cout << b[i] << " ";
    return 0;
}