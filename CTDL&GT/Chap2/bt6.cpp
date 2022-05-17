#include <iostream>
using namespace std;

void Merge(int a[], int p, int q, int r)
{
    int i, j, n1, n2;
    n1 = q - p + 1;
    n2 = r - q;
    int L[n1], R[n2];
    for (i = 0; i < n1; i++)    L[i] = a[p + i];
    for (i = 0; i < n2; i++)    R[i] = a[q + 1 + i];
    L[n1] = 1e9;
    R[n2] = 1e9;
    i = 0, j = 0;
    for (int k = p; k <= r; k++) {
        if (L[i] <= R[j]) {
            a[k] = L[i];
            i++;
        }
        else {
            a[k] = R[j];
            j++;
        }
    }
}

void Merge_Giam(int a[], int p, int q, int r)
{
    int i, j, n1, n2;
    n1 = q - p + 1;
    n2 = r - q;
    int L[n1], R[n2];
    for (i = 0; i < n1; i++)    L[i] = a[p + i];
    for (i = 0; i < n2; i++)    R[i] = a[q + 1 + i];
    L[n1] = -1e9;
    R[n2] = -1e9;
    i = 0, j = 0;
    for (int k = p; k <= r; k++) {
        if (L[i] <= R[j]) {
            a[k] = R[j];
            j++;
        }
        else {
            a[k] = L[i];
            i++;
        }
    }
}

void MergeSort(int a[], int p, int r)
{
    int q;
    if (p < r) {
        q = (p + r) / 2;
        MergeSort(a, p, q);
        MergeSort(a, q + 1, r);
        Merge_Giam(a, p, q, r);
    }
}

int main ()
{
    int n, a[100];
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    MergeSort(a, 0, n - 1);
    for (int i = 0; i < n; i++) 
        cout << a[i] << " ";
    return 0;
}