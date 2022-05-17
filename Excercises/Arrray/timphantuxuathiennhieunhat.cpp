#include <iostream>
using namespace std;

int Max(int *a, int n)
{
    int max = a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] > max)
            max = a[i];
    }
    return max;
}

int AppearMax(int *a, int n)
{
    int max = Max(a, n);
    int *c = new int[max];
    if(!c)  return -1;
    for (int i = 0; i <= max; i++)  c[i] = 0;
    for (int i = 0; i < n; i++)     c[a[i]]++;
    int max2 = c[0], vtri = 0;
    for (int i = 1; i <= max; i++) {
        if (c[i] > max2) {
            max2 = c[i];
            vtri = i;
        }
    }
    delete []c;
    return vtri;
}

int main ()
{
    int n;
    cin >> n;
    int *a = new int[n];
    if(!a)  return -1;
    for (int i = 0; i < n; i++) cin >> a[i];
    cout << "Xuat hien nhieu nhat: " << AppearMax(a, n) << endl;
    delete []a;
    return 0;
}