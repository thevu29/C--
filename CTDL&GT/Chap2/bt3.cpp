#include <iostream>
using namespace std;
#define MAX 100

void Swap(int &a, int &b)
{
    int tmp = a;
    a = b;
    b = tmp;
}

void InsertionSort(int a[], int n)     
{
    int j, key;
    for (int i = 1; i < n; i++) {
        key = a[i];
        j = i - 1;
        while (j >= 0 && a[j] > key) {          //while (j >= 0 && a[j] < key)
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = key;
    }
}

void SelectionSort(int a[], int n)
{
    int k;
    for (int i = 0; i < n - 1; i++) {
        k = i;
        for (int j = i + 1; j < n; j++) {
            if (a[j] < a[k])                //if(a[j] > a[k])
                k = j;
        }
        Swap(a[i], a[k]);
    }
}

void BubbleSort(int a[], int n)
{
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] > a[j])                    //if(a[i] < a[j])
                Swap(a[i], a[j]);
        }
    }
}

int main ()
{
    int n;
    cin >> n;
    int a[MAX];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    return 0;   
}