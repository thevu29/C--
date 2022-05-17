#include <iostream>
using namespace std;

void MatInput(int a[][100], int m, int n)
{
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++)
            cin >> a[i][j];
    }
}

int SumOdd(int a[][100], int m, int n, int k)
{   
    int s = 0;
    for (int j = 0; j < n; j++) {
        if (a[k][j] % 2 != 0)
            s += a[k][j];
    }
    return s;
}

int main ()
{
    int n, m, k;
    cin >> m >> n;
    int a[100][100];
    MatInput(a, m, n);
    cout << "Nhap k: ";
    cin >> k;
    cout << SumOdd(a, m, n, k);
    return 0;
}