#include <iostream>
using namespace std;

int main ()
{
    int n;
    cout << "Nhap so phan tu mang: ";
    cin >> n;
    int a[n];
    cout << "Nhap cac gia tri mang: " << endl;
    for (int i = 0; i < n; i++) {
        cout << "a[" << i + 1 << "] = ";
        cin >> a[i];
    }

    cout << "\nMang sau khi nhap: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }

    cout << "\nMang sau khi dao nguoc: ";
    for (int i = n - 1; i >= 0; i--) {
        cout << a[i] << " ";
    }
    return 0;
}