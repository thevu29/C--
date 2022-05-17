#include <iostream>
using namespace std;

int main () 
{
    int n;
    cout << "Nhap n: ";
    cin >> n;
    int s = 1;
    int a = 1;
    for (int i = 2; i <= n; i++) {
        a = a * i;
        s = s + a;
    }
    cout << "Tong s = 1 + 1*2 + .. + 1*2*...*n = " << s;
    return 0;
}