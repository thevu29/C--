#include <iostream>
#include <time.h>
#include <cstdlib>
using namespace std;

int main () 
{ 
    srand(time(NULL));
    int n,m;
    cout << "Nhap so dong: ";
    cin >> n;
    cout << "Nhap so cot: ";
    cin >> m;
    int a[n][m], b[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            a[i][j] = rand() % 100;
            b[i][j] = rand () % 100;
        }
    }

    cout << "Ma tran A: " << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << a[i][j] << "\t";
        }
        cout << endl;
    }

    cout << "\nMa tran B: " << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << b[i][j] << "\t";
        }
        cout << endl;
    }

    int c[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            c[i][j] = a[i][j] + b[i][j];
        }
    }

    cout << "\nMa tran C = A + B: " << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << c[i][j] << "\t";
        }
        cout << endl;
    }
    return 0;
}