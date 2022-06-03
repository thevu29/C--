#include <iostream>
using namespace std;

int Partition(int a[], int p, int r)
{
    int j = p - 1, pivot = a[r];
    for (int i = p; i < r; i++)                // 5 4 3 2 1
    {
        if (a[i] < pivot)
        {
            j++;
            swap(a[i], a[j]);
        }
    }
    swap(a[j + 1], a[r]);
    return j + 1;
}

void Quicksort(int a[], int p, int r)
{
    if (p < r)
    {
        int q = Partition(a, p, r);
        Quicksort(a, p, q - 1);
        Quicksort(a, q + 1, r);
    }
}

int main()
{
    int n, a[100];
    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];
    Quicksort(a, 0, n - 1);
    for (int i = 0; i < n; i++) cout << a[i] << " ";
    return 0;
}