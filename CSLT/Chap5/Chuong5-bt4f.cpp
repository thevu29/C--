#include <iostream>
#include <math.h>
using namespace std;

void Nhapmang(int a[][100], int m, int n)
{
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
}

void Xuatmang(int a[][100], int m, int n)
{
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << a[i][j] << "\t";
        }
        cout << endl;
    }
}

bool Songuyento(int n)
{
    if (n < 2)
        return false;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}

bool Songuyentodoixung(int n)
{
    int lientruoc, liensau, i;
    if (Songuyento(n)) {
        int i;
        for (i = n - 1; i >= 2; i--) {
            if (Songuyento(i)) {
                lientruoc = i;
                break;
            }
        }
        i = n;
        while (true) {
            i++;
            if (Songuyento(i)) {
                liensau = i;
                break;
            }
        }
    }
    double tb = (lientruoc + liensau) / 2.0;
    if (tb == n) 
        return true;
    return false;
}

int Demsonguyentodoixung(int a[][100], int m, int n)
{
    int dem = 0;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (Songuyentodoixung(a[i][j]))
                dem++;
        }
    }
    return dem;
}

int main ()
{
    int m, n;
    cout << "Nhap so dong: ";
    cin >> m;
    cout << "Nhap so cot: ";
    cin >> n;
    int a[100][100];
    Nhapmang(a, m, n);
    Xuatmang(a, m, n);
    cout << "Co " << Demsonguyentodoixung(a, m, n) << " so nguyen to doi xung trong mang ";
    return 0;
}