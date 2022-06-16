#include <iostream>
using namespace std;

void SelectionSort(int a[], int n)
{
    int min, max, min_i, max_i, j = n - 1;
    for (int i = 0; i < j; i++)
    {
        min = a[i], max = a[i];
        min_i = i, max_i = i;

        for (int k = i + 1; k <= j; k++)
        {
            if (a[k] > max)
            {
                max = a[k];
                max_i = k;
            }

            if (a[k] < min)
            {
                min = a[k];
                min_i = k;
            }
        }

        swap(a[i], a[max_i]);
        if (a[max_i] == min)
            swap(a[j], a[max_i]);
        else
            swap(a[j], a[min_i]);
        j--;
    }
}

int main()
{
    int n, a[100];
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    SelectionSort(a, n);
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    return 0;
}