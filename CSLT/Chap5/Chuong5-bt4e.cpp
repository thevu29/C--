#include <iostream>
#include <math.h>
using namespace std;

void Nhapmang(int a[][100], int m, int n)
{
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << "a[" << i << "][" << j << "] = ";
            cin >> a[i][j];
        }
    }
}

void Xuatmang(int a[][100], int m, int n)
{
    cout << "Bang so: " << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << a[i][j] << "\t";
        }
        cout << endl;
    }
}

bool checkSonguyento(int n)
{
    if (n < 2)
        return false;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}

int Demsonguyento(int a[][100], int m, int n)
{
    int dem = 0;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
           if (checkSonguyento(a[i][j]))
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
    cout << "Co " << Demsonguyento(a, m, n) << " so nguyen to trong mang ";
    return 0;
}