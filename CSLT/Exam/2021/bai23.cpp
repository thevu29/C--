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

void Min(int a[][100], int b[], int m, int n)
{
    for (int i = 0; i < m; i++) {
        int min = a[i][0];
        for (int j = 0; j < n; j++) {
            if (a[i][j] < min ) 
                min = a[i][j];
        }
        b[i] = min;
    }
}

void Max(int a[][100], int c[], int m, int n)
{
    for (int j = 0; j < n; j++) {
        int max = a[0][j];
        for (int i = 0; i < m; i++) {
            if (a[i][j] > max) 
                max = a[i][j];
        }
        c[j] = max;
    }
}

int Tim(int b[], int c[], int m, int n)
{
    int minmax;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (b[i] == c[j]) 
                minmax = b[i];
        }
    }
    return minmax;
}

int main ()
{
    int m, n;
    cout << "Nhap so dong: ";
    cin >> m;
    cout << "Nhap so cot: ";
    cin >> n;
    int a[100][100], b[m], c[n];
    cout << "Nhap ma tran: " << endl;
    Nhapmat(a, m, n);
    Min(a, b, m, n);
    Max(a, c, m, n);
    cout << "Gia tri nho nhat tren dong va lon nhat tren cot cua ma tran: " << Tim(b, c, m, n);   
    return 0;
}