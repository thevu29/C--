#include <iostream>
#include <algorithm>
#define MAX 1001
using namespace std;

void MaxHeapify(int a[], int n, int i)      //O(log2(n))
{
    int l, r, max;
    max = i;
    l = 2 * i + 1;
    r = 2 * i + 2;
    if (l < n && a[l] > a[max]) 
        max = l;
    if (r < n && a[r] > a[max]) 
        max = r;
    if (max != i) {
        swap(a[i], a[max]);
        MaxHeapify(a, n, max);
    }
}

void MinHeapify(int a[], int n, int i)
{
    int l, r, min;
    min = i;
    l = 2 * i + 1;
    r = 2 * i + 2;
    if (l < n && a[l] < a[min]) 
        min = l;
    if (r < n && a[r] < a[min]) 
        min = r;
    if (min != i) {
        swap(a[i], a[min]);
        MinHeapify(a, n, min);
    }
}

void HeapSort(int a[], int n)
{
    for (int i = (n / 2) - 1; i >= 0; i--)      //O(n x log2(n))
        MaxHeapify(a, n, i);
    for (int i = n - 1; i >= 0; i--) {      //O(n x log2(n))
        swap(a[0], a[i]);
        MaxHeapify(a, i, 0);          
    }
}
      
int Partition(int a[], int p, int r)
{
    int i, j, k;
    k = a[r];
    i = p - 1;

    for (j = p; j < r; j++) 
    {
        if (a[j] < k) 
        {
            i++;                
            swap(a[j], a[i]);
        }
    }

    swap(a[i + 1], a[r]);
    return i + 1;
}

void Quicksort(int a[], int p, int r)
{
    int q;
    if (p < r) {
        q = Partition(a, p, r);
        Quicksort(a, p, q - 1);
        Quicksort(a, q + 1, r);
    }
}

int main ()
{
    int n, a[MAX];
    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];
    //HeapSort(a, n);
    Quicksort(a, 0, n - 1);
    for (int i = 0; i < n; i++) cout << a[i] << " ";
    return 0;
}