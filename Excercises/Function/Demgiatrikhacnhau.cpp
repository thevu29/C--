#include <iostream>
#include <math.h>
using namespace std;

void Nhapmang(int a[], int n)
{
    for (int i = 0; i < n; i++) {
        cout << "Nhap so thu " << i + 1 << ": ";
        cin >> a[i];
    }
}

void Xuatmang(int a[], int n)
{
    cout << "Day so: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
}

void Demgiatrikhacnhau(int a[], int n, int &x)
{
    int b[n];
    x = 1;
    b[0] = a[0];
    for (int i = 1; i < n; i++) {
        int dem = 0;
        for (int j = 0; j < x; j++) {
            if (a[i] == b[j])
                dem++;
        }
        if (dem == 0) {
            b[x] = a[i];
            x++;
        }
    }
}

int main()
{
    int n, x;
    do {
        cout << "Nhap phan tu mang: ";
        cin >> n;
        if (n > 3 * pow(10, 4))
            cout << "Nhap n <= 30 000 ";
    } 
    while (n > 3 * pow(10, 4));
    int a[n];
    Nhapmang(a, n);
    Xuatmang(a, n);
    Demgiatrikhacnhau(a, n, x);
    cout << "\nCo " << x << " phan tu khac nhau trong mang ";
    return 0;
}