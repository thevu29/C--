#include <iostream>
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
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << a[i][j] << "\t";
        }
        cout << endl;
    }
}

void MangB(int a[][100], int b[][100], int m, int n) 
{
    int min;
    for (int i = 0; i < m; i++) {
        min = a[i][0];
        for (int j = 0; j < n; j++) {
            if (a[i][j] < min) {
                min = a[i][j];
            }
        }
        for (int k = 0; k < n; k++) {
            b[i][k] = a[i][k] * min;
        }
    }
}

int main ()
{
    int m, n;
    cout << "Nhap so dong: ";
    cin >> m;
    cout << "Nhap so cot: ";
    cin >> n;
    int a[100][100], b[100][100];
    Nhapmang(a, m, n);
    cout << "Bang so A: " << endl;
    Xuatmang(a, m, n);
    MangB(a, b, m, n);
    cout << "\nBang so B: " << endl;
    Xuatmang(b, m, n);
    return 0;
}