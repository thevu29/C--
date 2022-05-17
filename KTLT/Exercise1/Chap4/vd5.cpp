#include <iostream>
#include <algorithm>
using namespace std;

int binarySearch(int arr[], int l, int r, int x)
{
    if (r >= l) {
        int mid = l + (r - l) / 2;
        if (arr[mid] == x)
            return mid;
        if (arr[mid] > x)
            return binarySearch(arr, l, mid - 1, x);

        return binarySearch(arr, mid + 1, r, x);
    }
    return -1;
}

int main()
{
    int n, k, *a;
    cin >> n;
    a = new int[n];
    if (!a)
        return -1;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a + n);
    cin >> k;
    int result = binarySearch(a, 0, n - 1, k);
    if (result == -1)
        cout << "kh tim thay ";
    else
        cout << "tim thay ";
    delete[] a;
    return 0;
}