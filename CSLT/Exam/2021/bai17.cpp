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

void Sum(int a[][100], int b[][100], int m, int n)
{
    int c[100][100];
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            c[i][j] = a[i][j] + b[i][j];
        }
    }
    cout << "Tong 2 ma tran: " << endl;
    Xuatmat(c, m, n);
}

int main ()
{
    int m, n;
    cout << "Nhap so dong: ";
    cin >> m;
    cout << "Nhap so cot: ";
    cin >> n;
    int a[100][100], b[100][100];
    cout << "Nhap ma tran thu 1: " << endl;
    Nhapmat(a, m, n);
    cout << "Nhap ma tran thu 2: " << endl;
    Nhapmat(b, m, n);
    Sum(a, b, m, n);
    return 0;
}