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

void Demphantukhacnhau(int a[], int b[], int n, int &x)
{
    x = 1;
    b[0] = a[0];
    for (int i = 1; i < n; i++) {
        int dem = 0;
        for (int j = 0; j < x; j++) {
            if (a[i] == a[j])  
                dem++;
        }
        if (dem == 0) {
            b[x] = a[i];
            x++;
        }
    }
}

void Xuathiennhieunhat(int a[], int b[], int n, int &x)
{
    int c[x];
    for (int i = 0; i < x; i++)
        c[i] = 0;
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < n; j++) {
            if (a[j] == b[i])
                c[i]++;
        }
    }

    int max = c[0]; 
    int vitri = 0; 
    for (int i = 1; i < x; i++) {
        if (c[i] > max) {
            max = c[i];
            vitri = i;
        }
    }
    cout << "\nPhan tu xuat hien nhieu nhat la: " << b[vitri];
    cout << " - xuat hien " << max << " lan ";
}

int main ()
{
    int n, x;
    do {
        cout << "Nhap phan tu mang: ";
        cin >> n;
        if (n > 3 * pow(10, 4))
            cout << "Nhap n <= 30 000 ";
    } 
    while (n > 3 * pow(10, 4));
    int a[n], b[n];
    Nhapmang(a, n);
    Xuatmang(a, n);
    Demphantukhacnhau(a, b, n, x);
    Xuathiennhieunhat(a, b, n, x);
    cout << "\nCo " << x << " phan tu khac nhau trong mang ";
    return 0;
}