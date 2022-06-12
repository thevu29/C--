#include <iostream>
using namespace std;

void Merge(int a[], int p, int q, int r)
{
    int i, j, n1, n2, L[100], R[100];
    n1 = q - p + 1;
    n2 = r - q;

    for (i = 0; i < n1; i++)    L[i] = a[p + i];
    for (j = 0; j < n2; j++)    R[j] = a[q + j + 1];

    L[n1] = INT_MAX;                    // L[n1] = INT_MIN;
    R[n2] = INT_MAX;                    // R[n2] = INT_MIN;
    i = 0, j = 0;                       // i = 0, j = 0;

    for (int k = p; k <= r; k++)        // for (int k = p; k <= r; k++)
    {                                   // {
        if (L[i] < R[j])                //      if (L[i] < R[j])
        {                               //      {
            a[k] = L[i];                //          a[k] = R[j];
            i++;                        //          j++;
        }                               //      }
        
        else                            //      else
        {                               //      {
            a[k] = R[j];                //          a[k] = L[i];
            j++;                        //          i++;
        }                               //      }
    }                                   // }
}

void MergeSort(int a[], int p, int r)
{
    if (p < r)
    {
        int q = (p + r) / 2;
        MergeSort(a, p, q);
        MergeSort(a, q + 1, r);
        Merge(a, p, q, r);
    }
}

int Partition(int a[], int p, int r)
{
    int j, pivot;
    pivot = a[r];
    j = p - 1;

    for (int i = p; i < r; i++)
    {
        if (a[i] <= pivot)
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
    for (int i = 0; i < n; i++) 
        cin >> a[i];
    // MergeSort(a, 0, n - 1);
    Quicksort(a, 0, n - 1);
    for (int i = 0; i < n; i++) 
        cout << a[i] << " ";
    return 0;
}