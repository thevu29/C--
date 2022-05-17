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

bool Sodoixung(int n)
{
    int daonguoc = 0;
    while (n > 0) {
        daonguoc = daonguoc * 10 + n % 10;
        n /= 10;
    }
    if (daonguoc == n)
        return true;
    return false;
}

int main ()
{
    int n;
    cout << "Nhap n: ";
    cin >> n;
    cout << "So vua la so nguyen to vua la so doi xung tu 1 toi " << n << ": ";
    for (int i = 2; i <= n; i++) {
        if (Songuyento(i) && Sodoixung(i)) 
            cout << i << " ";
    }
    return 0;
}