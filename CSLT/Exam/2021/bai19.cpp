#include <iostream>
using namespace std;

int main ()
{
    int n;
    cout << "Nhap so dong va so cot cua ma tran vuong: ";
    cin >> n;
    int a[n][n];
    cout << "Nhap ma tran: " << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
    int s = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j)
                s += a[i][j];
        }
    }
    cout << "Tong cac phan tu tren duong cheo chinh = " << s;
    return 0;
}