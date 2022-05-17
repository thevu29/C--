#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

void Nhapmang(int a[][100], int m, int n)
{
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            //cin >> a[i][j];
            a[i][j] = rand() % 100 + 1;
        }
    }
}

void Xuat(int a[][100], int m, int n)
{
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << a[i][j] << "\t";
        }
        cout << endl;
    }
}

int MintrongMax(int a[][100], int m, int n)
{
    int max, b[m];
    for (int i = 0; i < m; i++) {
        max = a[i][0];
        for (int j = 0; j < n; j++) {
            if (a[i][j] > max) {
                max = a[i][j];
            }
        }   
        b[i] = max;
    }

    int min = b[0];
    for (int i = 1; i < m; i++) {
        if (b[i] < min) 
            min = b[i];
    }
    return min;
}

int main ()
{
    srand(time(NULL));
    int m, n;
    cout << "Nhap so dong: ";
    cin >> m;
    cout << "Nhap so cot: ";
    cin >> n;
    int a[100][100];
    Nhapmang(a, m, n);
    Xuat(a, m, n);
    cout << "Gia tri nho nhat trong cac gia tri lon nhat o tung dong la: " << MintrongMax(a, m ,n);
    return 0;
}
