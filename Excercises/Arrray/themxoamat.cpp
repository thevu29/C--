#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

void Nhap(int a[][100], int n, int m)
{
    cout << "Nhap ma tran: " << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            //cin >> a[i][j];
            a[i][j] = rand() % 50 + 1;
        }
    }
}

void Xuat(int a[][100], int n, int m)
{
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << a[i][j] << "\t";
        }
        cout << endl;
    }
}

void Delete(int a[][100], int& n, int m)
{
    int x;
    cout << "\nNhap dong muon xoa: ";
    cin >> x;
    for (int i = x - 1; i < n - 1; i++) {
        for (int j = 0; j < m; j++) {
            a[i][j] = a[i + 1][j]; 
        }
    }
    cout << "Ma tran sau khi xoa dong " << x << ": " << endl; 
    n--;
    Xuat(a, n, m);
}

void Add(int a[][100], int b[], int& n, int m)
{
    int x;
    cout << "\nNhap dong muon them: ";
    cin >> x;
    cout << "Nhap phan tu cua dong: ";
    for (int i = 0; i < m; i++) {
        cin >> b[i];
    }
    
    for (int i = n; i > x - 1; i--) {
        for (int j = 0; j < m; j++) {
            a[i][j] = a[i - 1][j];
        }
    }

    for (int i = 0; i < m; i++) {
        a[x - 1][i] = b[i];
    }
    cout << "Ma tran sau khi them dong " << x << ": " << endl;
    n++;
    Xuat(a, n, m);
}

int main ()
{
    srand(time(NULL));
    int n, m;
    cin >> n >> m;
    int a[100][100], b[m];
    Nhap(a, n, m);
    Xuat(a, n, m);
    Delete(a, n, m);
    Add(a, b, n, m);
    return 0;
}