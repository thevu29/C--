#include <iostream>
using namespace std;

void MatInput(int a[][100], int n, int m)
{
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++)
            cin >> a[i][j];
    }
}

void find_MinMax_ofRow(int a[][100], int b[], int c[], int n, int m)
{
    int min, max;
    for (int i = 0; i < m; i++) {
        min = a[i][0];
        for (int j = 0; j < n; j++) {
            if (a[i][j] < min) 
                min = a[i][j];
        }
        b[i] = min;         //mang b luu nhung gia tri nho nhat tren dong
    }
    for (int i = 0; i < m; i++) {
        max = a[i][0];
        for (int j = 0; j < n; j++) {
            if (a[i][j] > max) 
                max = a[i][j];
        }
        c[i] = max;        //mang c luu nhung gia tri lon nhat tren dong
    }
}

void find_MinMax_ofCol(int a[][100], int d[], int e[], int n, int m)
{
    int min, max;
    for (int j = 0; j < n; j++) {
        min = a[0][j];
        for (int i = 0; i < m; i++) {
            if (a[i][j] < min) 
                min = a[i][j];
        }
        d[j] = min;      //mang d luu nhung gia tri nho nhat tren cot
    }
    for (int j = 0; j < n; j++) {
        max = a[0][j];
        for (int i = 0; i < m; i++) {
            if (a[i][j] > max) 
                max = a[i][j];
        }
        e[j] = max;     //mang e luu nhung gia tri lon nhat tren cot
    }
}

void findSaddle(int b[], int c[], int d[], int e[], int n, int m)
{
    int cnt = 0, cnt1 = 0;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (b[i] == e[j])  {
                cout << b[i] << " ";
                cnt++;
            }
            if (c[i] == d[j]) {
                cout << c[i] << " ";
                cnt1++;
            }
        }
    }
    if (cnt == 0 && cnt1 == 0)
        cout << -1;
}

int main ()
{
    int n, m, a[100][100], b[100], c[100], d[100], e[100];
    cin >> n >> m;
    MatInput(a, n, m);
    find_MinMax_ofRow(a, b, c, n, m);
    find_MinMax_ofCol(a, d, e, n, m);
    findSaddle(b, c, d, e, n, m);
    return 0;
}