#include <iostream>
#include <algorithm>
using namespace std;

void Nhap(int *p, int n) 
{
    for (int i = 0; i < n; i++) {
        cin >> *(p + i);
    }
}

void Xuat(int *p, int n)
{
    for (int i = 0; i < n; i++) {
        cout << *(p + i) << " ";
    }
}

int main ()
{
    int n;
    cin >> n;
    int *p = new int[n];
    Nhap(p, n);
    sort(p, p + n);
    cout << "Sap xep tang dan: ";
    Xuat(p, n);
    return 0;
}