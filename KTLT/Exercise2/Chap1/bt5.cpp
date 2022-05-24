#include <iostream>
using namespace std;

void Input(int a[], int b[], int n, int m)
{
    cout << "Nhap mang a: ";
    for (int i = 0; i < n; i++)
        cin >> a[i];
    cout << "Nhap mang b: ";
    for (int i = 0; i < m; i++)
        cin >> b[i];
}

void Insert(int a[], int b[], int n, int m)
{
    int p, c[100], i = 0, tmp = 0;
    cout << "p = ";
    cin >> p;

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

    for (int i = 0; i < n + m; i++) 
        cout << c[i] << " ";
}

int main()
{
    int n, m, a[100], b[100];
    cin >> n >> m;
    Input(a, b, n, m);
    Insert(a, b, n, m);
    return 0;
}