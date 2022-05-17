#include <iostream>
#include <math.h>
using namespace std;

int Tonguocso(int n)
{
    int sum = 0;
    for (int i = 1; i < n; i++) {
        if (n % i == 0) 
            sum += i;
    } 
    return sum;
}

void Tim(int n)
{
    /*int flag = 1;
    for (int i = 1; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (Tonguocso(i) == j && Tonguocso(j) == i ) {
                if (i > j) {
                    cout << "p = " << j << " va q = " << i << endl;
                    flag = 0;
                }
                else {
                    cout << "p = " << i << " va q = " << j << endl;
                    flag = 0;
                }
            }
        }
    }
    if (flag == 1) {
        cout << "Khong ton tai p va q trong khoang tu 1 toi " << n;
    }*/
    int z;
    for (int i = 1; i < n; i++) {
        z = Tonguocso(i);
        if (z <= n && Tonguocso(z) == i && z > i) {
            cout << "p = " << i << " va q = " << z << endl;
        }
    }
}

int main ()
{
    int n;
    do {
        cout << "Nhap n: ";
        cin >> n;
        if (n > pow(10,6)) {
            cout << "Nhap n <= 1 trieu ";
        }
    }
    while (n > pow(10, 6));
    Tim(n);
    return 0;
}