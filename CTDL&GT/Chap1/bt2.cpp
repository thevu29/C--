#include <iostream>
using namespace std;

bool Search(int a[], int n, int x)
{
    if (n < 0) 
        return false;
    else if (a[n] == x) 
        return true;
    return Search(a, n - 1, x);
}

int main ()
{
    int n, x, a[100];
    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];
    cin >> x;
    if(Search(a, n - 1, x))
        cout << "tim thay ";
    else    
        cout << "khong tim thay ";
    return 0;
}