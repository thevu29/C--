#include <iostream>
#include <algorithm>
using namespace std;

bool BinarySearch(int a[], int l, int r, int x)
{
    if(l <= r) {
        int m = (l + r) / 2;
        if(a[m] == x)
            return true;
        if (a[m] > x)
            return BinarySearch(a, l, m - 1, x);
        return BinarySearch(a, m + 1, r, x);
    }
    return false;
}

int main ()
{
    int n, x, a[100];
    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];
    cin >> x;
    sort(a, a + n);
    if(BinarySearch(a, 0, n - 1, x))
        cout << "tim thay ";
    else    
        cout << "khong tim thay ";
    return 0;
}