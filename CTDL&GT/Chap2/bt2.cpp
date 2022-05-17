#include <iostream>
#include <algorithm>
using namespace std;
#define MAX 100

bool BinarySearch(int a[], int n, int k)
{
    int mid, l = 0, r = n - 1;
    while (l <= r) {
        mid = (l + r) / 2;
        if (a[mid] == k)
            return true;
        else if(a[mid] < k)
            l = mid + 1;
        else
            r = mid - 1;
    }
    return false;
}

int main ()
{
    int n, k;
    cin >> n;
    int a[MAX];
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a, a + n);
    cin >> k;
    if (BinarySearch(a, n, k))
        cout << "tim thay ";
    else 
        cout << "kh tim thay ";
    return 0;
}