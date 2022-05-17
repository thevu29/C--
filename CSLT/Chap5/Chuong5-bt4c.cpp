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
    cout << "Bang so: " << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << a[i][j] << "\t";
        }
        cout << endl;
    }
}

void TongphantuMoidong(int a[][100], int m, int n)
{
    for (int i = 0; i < m; i++) {
        int s1 = 0;
        for (int j = 0; j < n; j++) {
            s1 += a[i][j];
        }
        cout << "\nTong phan tu dong " << i + 1 << " = " << s1;
    }
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
    TongphantuMoidong(a, m, n);
    return 0;
}