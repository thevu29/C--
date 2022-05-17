#include <iostream>
using namespace std;

void Nhapmang(int a[][100], int n)
{
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
}

int Cau_a(int a[][100], int n)
{
    int s1 = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) 
                s1 += a[i][j];
        }
    }
    return s1;
}

int Cau_b(int a[][100], int n)
{
    int s2 = 0;
    for (int i = 0; i < n; i++) {
        for (int j = n - 1; j >= 0; j--) {
            if (j == n - 1 - i) 
                s2 += a[i][j];
        }
    }
    return s2;
}

int Cau_c(int a[][100], int n)
{
    int s3 = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (j > i) 
                s3 += a[i][j];
        }
    }
    return s3;
}

int Cau_d(int a[][100], int n)
{
    int s4 = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i > j) 
                s4 += a[i][j];
        }
    }
    return s4;
}

int main ()
{
    int n;
    cout << "Nhap so dong va so cot: ";
    cin >> n;
    int a[100][100];
    Nhapmang(a, n);
    cout << "Ket qua cau a: " << Cau_a(a, n) << endl;
    cout << "Ket qua cau b: " << Cau_b(a, n) << endl;
    cout << "Ket qua cau c: " << Cau_c(a, n) << endl;
    cout << "Ket qua cau d: " << Cau_d(a, n);
    return 0;
}