#include <iostream>
#include <math.h>
using namespace std;

int main ()
{
    long long n;
    do {
        cout << "Nhap n: ";
        cin >> n;
        if (n > pow(10,9)) {
            cout << "Nhap n <= 1 ty ";
        }
    }
    while (n > pow(10, 9));
    int dem = 0;
    int flag;
    for (int i = 1; i <= n; i++) {
        if (i >= 2) {
            flag = 1;
            for (int j = 2; j <= i/2; j++) {
                if (i % j == 0) {
                    flag = 0;
                    break;
                }
                else {
                    flag = 1;
                }
            }
        }
        else {
            flag = 0;
        }
        if (flag == 1) {
            dem++;
        }
    }
    cout << "Co " << dem << " so nguyen to tu 1 toi " << n;
    return 0;
}