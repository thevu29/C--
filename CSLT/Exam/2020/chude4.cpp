#include <iostream>
using namespace std;

void Nhapmang(int a[][500], int m, int n)
{
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
}

void Xuatmang(int a[][500], int m, int n)
{
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << a[i][j] << "\t";
        }
        cout << endl;
    }
}

int Cau_16(int a[][500], int m, int n)
{
    int min = a[0][0];
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (a[i][j] < min)
                min = a[i][j];
        }
    }
    return min;
}

int Cau_17(int a[][500], int m, int n)
{
    int s = 0;
    for (int i = 1; i < m - 1; i++) {
        for (int j = 1; j < n - 1; j++) {
            s += a[i][j];
        }
    }
    return s;
}

void Cau_18(int a[][500], int m, int n)
{
    int s1;
    for (int i = 0; i < m; i++) {
        s1 = 0;
        for (int j = 0; j < n; j++) {
            s1 += a[i][j];
        }
        cout << s1 << " ";
    }
    cout << endl;
}

void Cau_19(int a[][500], int m, int n)
{
    int s2;
    for (int i = 0; i < n; i++) {
        s2 = 0;
        for (int j = 0; j < m; j++) {
            s2 += a[j][i];
        }
        cout << s2 << " ";
    }
    cout << endl;
}

int Cau_20(int a[][500], int m, int n)
{
    int min, max, b[m];
    for (int i = 0; i < m; i++) {
        min = a[i][0];
        for (int j = 0; j < n; j++) {
            if (a[i][j] < min) {
                min = a[i][j];
            }
        }
        b[i] = min;
    }
    max = b[0];
    for (int i = 1; i < m; i++) {
        if (b[i] > max)
            max = b[i];
    }
    return max;
}

void Swap(int& a, int& b)
{
    int tmp = a;
    a = b;
    b = tmp;
}

void Cau_21(int a[][500], int m, int n)
{
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            for (int k = j + 1; k < n; k++) {
                if (a[i][j] > a[i][k]) 
                    Swap(a[i][j], a[i][k]);
            }
        }
    }
    Xuatmang(a, m, n);
}

int main ()
{
    int m, n;
    do {
        cout << "Nhap so dong <= 500: ";
        cin >> m;
        cout << "Nhap so cot <= 500: ";
        cin >> n;
    }
    while (m > 500 && n > 500);
    int a[500][500];
    Nhapmang(a, m, n);
    cout << "Ket qua bai 16: " << Cau_16(a, m, n) << endl;
    cout << "Ket qua bai 17: " << Cau_17(a, m, n) << endl;
    cout << "Ket qua bai 18: ";
    Cau_18(a, m, n);
    cout << "Ket qua bai 19: ";
    Cau_19(a, m, n);
    cout << "Ket qua bai 20: " << Cau_20(a, m, n) << endl;
    cout << "Ket qua bai 21: " << endl;
    Cau_21(a, m, n);
    return 0;
}