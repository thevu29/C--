#include <iostream>
#include <math.h>
using namespace std;

bool isPrime(int n)
{
    if (n < 2)
        return false;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0)
            return false; 
    }
    return true;
}

int Tongchuso(int n)
{
    int s = 0;
    while (n > 0) {
        s += n % 10;
        n /= 10;
    }
    return s;
}

void Dem(int n)
{
    int cnt = 0;
    for (int i = 2; i < n; i++) {
        if (isPrime(i) && isPrime(Tongchuso(i))) {
            cout << i << " ";     
            cnt++;
        }
    }
    cout << "\nSo song to khong vuot qua " << n << ": " << cnt;
}

int main ()
{
    int n;
    cout << "Nhap n: ";
    cin >> n;
    Dem(n);
    return 0;
}