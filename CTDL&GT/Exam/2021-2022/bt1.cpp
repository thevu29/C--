#include <iostream>
using namespace std;

void SelectionSort(int a[], int n)
{
    int k, flag;
    for (int i = 0; i < n - 1; i++)
    {
        k = i;
        flag = 0;

        for (int j = i + 1; j < n; j++)
        {
            if (a[j] > a[k])
            {
                k = j;
                flag = 1;
            }
        }

        if (flag)
            swap(a[i], a[k]);
        else
            break;
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