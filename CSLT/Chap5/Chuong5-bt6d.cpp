#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

void Nhapmang(int a[][100], int m, int n)
{
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            //cout << "a[" << i << "][" << j << "] = ";
            cin >> a[i][j];
            //a[i][j] = rand() % 20 + 1;
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

void TraisangPhai(int a[][100], int m, int n)
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

void TrenxuongDuoi(int a[][100], int m, int n)
{
    for (int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            for (int k = i + 1; k < m; k++) {
                if (a[i][j] > a[k][j])
                    Hoanvi(a[i][j], a[k][j]);
            }
        }
    }
}

int main ()
{
    srand(time(NULL));
    int m, n;
    cout << "Nhap so dong: ";
    cin >> m;
    cout << "Nhap so cot: ";
    cin >> n;
    int a[100][100], b[100][100];
    Nhapmang(a, m, n);
    cout << "\nBang so A: " << endl;
    //Xuatmang(a, m, n);
    TraisangPhai(a, m, n);
    TrenxuongDuoi(a, m, n);
    cout << "\nBang so A sau khi sap xep tang dan tu trai sang phai, tu tren xuong duoi: " << endl;
    Xuatmang(a, m, n);
    return 0;
}
