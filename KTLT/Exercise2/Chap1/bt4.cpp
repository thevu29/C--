#include <iostream>
#include <algorithm>
using namespace std;

void Delete(int *a, int n)
{
    int j = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] != a[j])
        {
            j++;
            a[j] = a[i];
        }
    }
    
    for (int i = 0; i <= j; i++)
        cout << a[i] << " ";
}

int main()
{
    int n, a[100];
    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a, a + n); // 1 1 1 2 2 3 4
    Delete(a, n);
    return 0;
}