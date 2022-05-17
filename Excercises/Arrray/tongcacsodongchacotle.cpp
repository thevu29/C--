#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

int main ()
{
    srand(time(NULL));
    int n, m;
    cout << "Nhap so dong: ";
    cin >> n;
    cout << "Nhap so cot: ";
    cin >> m;
    int a[n][m];
    cout << "Ma tran A: "<< endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            a[i][j] = rand() % 10 + 1;
            cout << a[i][j] << "\t";
        }
        cout << endl;
    }

    int b[m][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            b[j][i] = a[i][j];
        }
    }

    cout << "\nMa tran nghich dao: " << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << b[i][j] << "\t";
        }
        cout << endl;
    }

    int s = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if ((i + 1) % 2 == 0 && (j + 1) % 2 == 1) {
                s += a[i][j];
            }
        }
    }
    cout << "\nTong cac so dong chan va cot le cua ma tran = " << s;
    return 0;
}