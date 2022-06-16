#include <iostream>
#define MAX 100;
using namespace std;

bool Search(int a[], int n, int k)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] == k)
            return true;
    }
    return false;
}

int main()
{
    int n, k;
    cin >> n;
    int a[100];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    cin >> k;
    if (Search(a, n, k))
        cout << "Tim thay ";
    else
        cout << "Kh tim thay ";
    return 0;
}