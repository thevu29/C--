#include <iostream>
using namespace std;

void AcsMerge(int a[], int p, int q, int r)
{
    int i, j, n1, n2, L[100], R[100];
    n1 = q - p + 1;
    n2 = r - q;

    for (i = 0; i < n1; i++)    L[i] = a[p + i];
    for (j = 0; j < n2; j++)    R[j] = a[q + j + 1];

    L[n1] = INT_MAX;
    R[n2] = INT_MAX;
    i = 0, j = 0;

    for (int k = p; k <= r; k++)
    {
        if (L[i] < R[j])
        {
            a[k] = L[i];
            i++;
        }

        else
        {
            a[k] = R[j];
            j++;
        }
    }
}

void DesMerge(int a[], int p, int q, int r)
{
    int i, j, n1, n2, L[100], R[100];
    n1 = q - p + 1;
    n2 = r - q;

    for (i = 0; i < n1; i++)    L[i] = a[p + i];
    for (j = 0; j < n2; j++)    R[j] = a[q + j + 1];

    L[n1] = INT_MIN;
    R[n2] = INT_MIN;
    i = 0, j = 0;

    for (int k = p; k <= r; k++)
    {
        if (L[i] < R[j])
        {
            a[k] = R[j];
            j++;
        }

        else
        {
            a[k] = L[i];
            i++;
        }
    }
}

void MergeSort(int a[], int p, int r)
{
    if (p < r)
    {
        int q = (p + r) / 2;
        MergeSort(a, p, q);
        MergeSort(a, q + 1, r);
        DesMerge(a, p, q, r);
    }
}

int Partition(int a[], int p, int r)
{
    int i, j, k;
    k = a[r];
    i = p - 1;

    for (j = p; j < r; j++)
    {
        if (a[j] <= k)
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