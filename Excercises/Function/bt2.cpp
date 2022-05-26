#include <iostream>
using namespace std;

bool Sochiahetcho3(int n)
{
    int s = 0;
    while (n > 0) {
        int a = n % 10;
        s += a;
        n = n / 10;
    }
    if(s % 3 == 0)
        return true;
    return false;
}

int main ()
{
    int n;
    cout << "Nhap n: ";
    cin >> n;
    if (Sochiahetcho3(n)) 
        cout << n << " la so chia het cho 3 ";
    else 
        cout << n << " khong la so chia het cho 3 ";
    return 0;
}