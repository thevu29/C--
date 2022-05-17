#include <iostream>
using namespace std;

void Nhapmat(int a[][100], int m, int n)
{
    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> a[i][j];
        }
    }
}

void Xuatmat(int a[][100], int m, int n)
{
    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            cout << a[i][j] << "\t";
        }
        cout << endl;
    }
}

void Hoandoi(int& a, int& b)
{
    int tmp = a;
    a = b;
    b = tmp;
}

void Hoandoi2cot(int a[][100], int m, int n)
{
    int c, d;
    cout << "Nhap 2 cot muon hoan doi: ";
    cin >> c >> d;
    for (int i = 1; i <= m; i++) {
        Hoandoi(a[i][c], a[i][d]);
    }
    cout << "Ma tran sau khi hoan doi 2 cot:" << endl;
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
    Nhapmat(a, m, n);
    Hoandoi2cot(a, m, n);
    return 0;
}