#include <iostream>
using namespace std;

void Output(int a[], int n)
{
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;
}

void Swap(int &a, int &b)
{
    int tmp = a;
    a = b;
    b = tmp;
}

void InsertionSort(int a[], int n)
{
    int j, key;
    for (int i = 1; i < n; i++)
    {
        key = a[i];
        j = i - 1;
        while (j >= 0 && a[j] > key) // while (j >= 0 && a[j] < key)
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = key;
    }
}

void SelectionSort(int a[], int n)
{
    int k;
    for (int i = 0; i < n - 1; i++)
    {
        k = i;
        for (int j = i + 1; j < n; j++)
        {
            if (a[j] < a[k]) // if(a[j] > a[k])
                k = j;
        }
        Swap(a[i], a[k]);
    }
}

void BubbleSort(int a[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1]) // if(a[j] < a[j + 1])
                Swap(a[j], a[j + 1]);
        }
    }
}

int main()
{
    int n, a[100];
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    BubbleSort(a, n);
    Output(a, n);
    return 0;
}