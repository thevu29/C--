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

void Hoanvi(int &a, int &b)
{
    int tmp = a;
    a = b;
    b = tmp;
}

void Tangdantrentungdong(int a[][100], int m, int n)
{
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            for (int k = j + 1; k < n; k++) {
                if (a[i][j] > a[i][k])
                    Hoanvi(a[i][j], a[i][k]);
            }
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
    cout << "\nBang so A: " << endl;
    Xuatmang(a, m, n);
    Tangdantrentungdong(a, m, n);
    cout << "\nBang so A sau khi sap xep phan tu tang dan tren tung dong: " << endl;
    Xuatmang(a, m, n);
    return 0;
}
