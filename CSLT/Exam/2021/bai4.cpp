#include <iostream>
using namespace std;

int Daonguoc(int n)
{
    int sodaonguoc = 0;
    while (n > 0) {
        sodaonguoc = sodaonguoc * 10 + n % 10;
        n /= 10;
    }
    return sodaonguoc;
}

int main ()
{
    int n;
    cout << "Nhap so nguyen duong: ";
    cin >> n;
    cout << "So dao nguoc: " << Daonguoc(n);
    return 0;
}