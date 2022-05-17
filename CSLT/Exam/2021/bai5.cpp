#include <iostream>
using namespace std;

void Nhiphan(int n)
{
    if (n > 0) {
        int a = n % 2;
        Nhiphan(n/2);
        cout << a;
    }
}

int main ()
{
    int n;
    cout << "Nhap so nguyen duong: ";
    cin >> n;
    cout << n << " doi sang nhi phan: ";
    Nhiphan(n);
    return 0;
}