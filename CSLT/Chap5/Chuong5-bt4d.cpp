#include <iostream>
using namespace std;

void Nhapmang(int a[][100], int m, int n)
{
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << "a[" << i << "][" << j << "] = ";
            cin >> a[i][j];
        }
    }
}

void Xuatmang(int a[][100], int m, int n)
{
    cout << "Bang so: " << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << a[i][j] << "\t";
        }
        cout << endl;
    }
}

void GiatriMaxcuaMoidong(int a[][100], int m, int n)
{
    int max;
    for (int i = 0; i < m; i++) {
        max = a[i][0];
        for (int j = 0; j < n; j++) {
            if (a[i][j] > max)
                max = a[i][j];
        }
        cout << "\nGia tri lon nhat dong " << i + 1 << " la: " << max;
    }
}

int main ()
{
    int m, n;
    cout << "Nhap so dong: ";
    cin >> m;
    cout << "Nhap so cot: ";
    cin >> n;
    int a[100][100];
    Nhapmang(a, m, n);
    Xuatmang(a, m, n);
    GiatriMaxcuaMoidong(a, m, n);
    return 0;
}