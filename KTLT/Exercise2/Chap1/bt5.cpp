#include <iostream>
using namespace std;

void Input(int *&a, int *&b, int n, int m)
{
    cout << "Nhap mang a: ";
    for (int i = 0; i < n; i++)
        cin >> a[i];
    cout << "Nhap mang b: ";
    for (int i = 0; i < m; i++)
        cin >> b[i];
}

void Insert(int *a, int *b, int n, int m)
{
    int p, *c;
    cout << "p = ";
    cin >> p;
    c = new int[n + m];
    if (!c) return;
    
    int i = 0, tmp = 0;
    while (i < n)
    {
        if (i == p)
        {
            for (int j = 0; j < m; j++)
                c[tmp++] = b[j];
        }
        c[tmp++] = a[i];
        i++;
    }

    for (int i = 0; i < n + m; i++) cout << c[i] << " ";

    delete[] c;
}

int main()
{
    int n, m, *a, *b;
    cin >> n >> m;
    a = new int[n];
    b = new int[m];
    if (!a)
        return -1;
    if (!b)
        return -1;
    Input(a, b, n, m);
    Insert(a, b, n, m);
    delete[] a;
    delete[] b;
    return 0;
}