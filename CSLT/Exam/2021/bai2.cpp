#include <iostream>
using namespace std;

void Phantich(int n)
{
    int i = 2;
    while (n != 1 ) {
        if (n % i == 0) {
            cout << i;
            if (n != i) 
                cout << " x ";
            n /= i;
        }
        else
            i++;
    }
}

int main ()
{
    int n;
    cout << "Nhap so nguyen duong: ";
    cin >> n;
    cout << n << " = ";
    Phantich(n);
    return 0;
}