#include <iostream>
#include <math.h>
using namespace std;

bool Songuyento(int n)
{
    if (n < 2)
        return false;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main ()
{
    int n, cnt = 0;
    cout << "Nhap so nguyen duong: ";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        if (Songuyento(i))
            cnt++;
    }
    cout << "So nguyen to tu 1 toi " << n << ": " << cnt;
    return 0;
}