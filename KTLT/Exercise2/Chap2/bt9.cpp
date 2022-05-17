#include <iostream>
using namespace std;

void MaxSum(int *a, int n)
{
    int smax = INT_MIN, s = 0, begin = 0, end = 0, j = 0;
    for (int i = 0; i < n; i++) {
        if (s + a[i] < a[i]) {
           j = i;
           s = a[i];
        }
        else 
            s += a[i];
        if (smax < s) {
            smax = s;
            begin = j;
            end = i;
        }
    }
    for (int i = begin; i <= end; i++)
        cout << a[i] << " ";
}

int main ()
{
    int n, *a;
    cin >> n;
    a = new int[n];
    if(!a)  return -1;
    for(int i = 0; i < n; i++)  cin >> a[i];
    MaxSum(a, n);
    delete []a;
    return 0;
}