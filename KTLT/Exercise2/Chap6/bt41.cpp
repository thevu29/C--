#include <iostream>
using namespace std;

void Input(int *&a, int n)
{
    for (int i = 0; i < n; i++)
        cin >> a[i];
}

int Search(int *a, int n, int x)
{
    int m, l = 0, r = n - 1;
    while (l <= r) {
        m = (l + r) / 2;
        if (a[m] == x)
            return 1;
        if (a[m] > x)
            r = m - 1;
        else    
            l = m + 1;
    }   
    return 0;
}

int main ()
{
    int n, *a, x;
    cin >> n >> x;
    a = new int[n];
    if(!a)  return -1;
    Input(a, n);
    if (Search(a, n, x))
        cout << "tim thay ";
    else    
        cout << "khong tim thay ";
    delete []a;
    return 0;
}
