#include <iostream>
using namespace std;

int BinarySearch(int a[], int n, int x)
{
    int l = 0, r = n - 1;
    while (l <= r)
    {
        int m = (l + r) / 2;
        if (a[m] == x)
            return m;
        else if (a[m] > x)
            r = m - 1;
        else    
            l = m + 1;
    }
    return -1;
}

int main()
{
    int n, x, a[100];
    cin >> n >> x;
    for (int i = 0; i < n; i++) 
        cin >> a[i];
    cout << BinarySearch(a, n, x);
    return 0;
}