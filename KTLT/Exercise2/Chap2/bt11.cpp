#include <iostream>
#include <algorithm>
using namespace std;

void Input(int *&a, int n)
{
    a = new int[n];
    if (!a)
        return;
    for (int i = 0; i < n; i++)
        cin >> a[i];
}

void Output(int *a, int n)
{
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;
}

void CreatArrA(int *a, int *b, int *c, int n, int m)
{
    a = new int[n + m];
    if (!a) return;

    int i = 0, j = 0, k = 0;

    while (i < n && j < m)
    {
        if (b[i] > c[j])
        {
            a[k++] = c[j];
            j++;
        }
        else
        {
            a[k++] = b[i];
            i++;
        }
    }

    while (i < n)
    {
        a[k++] = b[i];
        i++;
    }

    while (j < m)
    {
        a[k++] = c[j];
        j++;
    }

    Output(a, n + m);
}

int main()
{
    int n, m, *a, *b, *c;
    cin >> n >> m;
    Input(b, n);
    Input(c, m);
    sort(b, b + n);
    sort(c, c + m);
    CreatArrA(a, b, c, n, m);
    
    delete[] a;
    delete[] b;
    delete[] c;
    return 0;
}