#include <iostream>
using namespace std;

void Nhapmat(int a[][100], int m, int n)
{
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
}

void Xuatmat(int a[][100], int m, int n)
{
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << a[i][j] << "\t";
        }
        cout << endl;
    }
}

void Swap(int& a, int& b)
{
    int tmp = a;
    a = b;
    b = tmp;
}

void Tangtheocot(int a[][100], int m, int n)
{
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            for (int k = i + 1; k < m; k++) {
                if (a[i][j] > a[k][j]) 
                    Swap(a[i][j], a[k][j]);
            }
        }
    }
    Xuatmat(a, m, n);
}

int main ()
{
    int m, n;
    cout << "Nhap so dong: ";
    cin >> m;
    cout << "Nhap so cot: ";
    cin >> n;
    int a[100][100];
    cout << "Nhap ma tran: " << endl;
    Nhapmat(a, m, n);
    cout << "Ma tran sap xep tang dang theo cot: " << endl;
    Tangtheocot(a, m, n);
    return 0;
}