#include <iostream>
#include <time.h>
#include <cstdlib>
using namespace std;

int main ()
{
    srand(time(NULL));
    int n, m, p;
    cout << "Nhap n: ";         //n: so dong ma tran A
    cin >> n;
    cout << "Nhap m: ";         //m: so cot cua ma tran A va so dong cua ma tran B
    cin >> m;
    cout << "Nhap p: ";         //p: so cot cua ma tran B
    cin >> p;
    int a[n][m], b[m][p];
    
    cout << "\nMa tran A cap " << n << " x " << m << ":" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            a[i][j] = rand() % 9 + 1;
            cout << a[i][j] << "\t";
        }
        cout << endl;
    }

    cout << "\nMa tran B cap " << m << " x " << p << ":"  << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++) {
            b[i][j] = rand() % 9 + 1;
            cout << b[i][j] << "\t";
        }
        cout << endl;
    }

    int c[n][p];
    cout << "\nMa tran C = A * B " << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < p; j++) {
            c[i][j] = 0;
            for (int k = 0; k < m; k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
            cout << c[i][j] << "\t";
        }
        cout << endl;
    }
    return 0;
}