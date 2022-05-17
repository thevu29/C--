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

void Tich(int a[][100], int b[][100], int m, int n, int p)
{
    int c[100][100];
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++) {
            c[i][j] = 0;
            for (int k = 0; k < n; k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    Xuatmat(c, m, p);
}

int main ()
{
    int m, n, p;            //A(m x n), B(n x p)
    cout << "Nhap m: ";
    cin >> m;
    cout << "Nhap n: ";
    cin >> n;
    cout << "Nhap p: ";
    cin >> p;
    int a[100][100], b[100][100];
    cout << "Nhap ma tran A: " << endl;
    Nhapmat(a, m, n);
    cout << "Nhap ma tran B: " << endl;
    Nhapmat(b, n, p);
    cout << "Tich 2 ma tran: " << endl;
    Tich(a, b, m, n, p);
    return 0;
}