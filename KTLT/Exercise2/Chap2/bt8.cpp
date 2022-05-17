#include <iostream>
#include <algorithm>
using namespace std;

void Find(int *a, int l, int r) // 1 2 3 4 5        //O(nlog(n))
{
    int k;
    cout << "k = ";
    cin >> k;
    while (l < r)
    {
        if (a[l] + a[r] == k)
            cout << a[l] << " " << a[r] << endl;
        if (a[l] + a[r] > k)
            r--;
        else
            l++;
    }
}

int main()
{
    int n, *a;
    cin >> n;
    a = new int[n];
    if (!a)
        return -1;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a + n);
    Find(a, 0, n - 1);
    delete[] a;
    return 0;
}