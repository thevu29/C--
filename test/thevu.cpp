#include <iostream>
using namespace std;

void MaxHeapify(int a[], int n, int i)
{
    int max = i, l = 2 * i, r = 2 * i + 1;

    if (l < n && a[l] > a[max])
        max = l;
    if (r < n && a[r] > a[max])
        max = r;
    if (max != i)
    {
        swap(a[max], a[i]);
        MaxHeapify(a, n, max);
    }
}

void HeapSort(int a[], int n)
{
    for (int i = (n / 2) - 1; i >= 0; i--)
        MaxHeapify(a, n, i);
    for (int i = n - 1; i >= 0; i--)
    {
        swap(a[0], a[i]);
        MaxHeapify(a, i, 0);
    }
}

int main()
{
    int n, a[100];
    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];
    HeapSort(a, n);
    for (int i = 0; i < n; i++) cout << a[i] << " ";
    return 0;
}