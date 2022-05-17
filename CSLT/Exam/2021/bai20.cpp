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
        for (int j = n - 1; j >= 0; j--) {
            if (i == n - 1 - j)
                s += a[i][j];
        }
    }
    cout << "Tong cac phan tu tren duong cheo phu = " << s;
    return 0;
}