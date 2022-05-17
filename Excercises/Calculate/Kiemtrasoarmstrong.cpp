#include <iostream>
#include <math.h>
using namespace std;

int Sochuso(int n)
{
    int sochuso = 0;
    while (n > 0) {
        n /= 10;
        sochuso++;
    }
    return sochuso;
}

int Tongluythua(int n)
{
    int tongluythua = 0;
    int a = n;
    for(int i = 1; i <= Sochuso(n); i++) {
        int b = a % 10;
        a /= 10;
        tongluythua += pow(b, Sochuso(n));
    }   
    return tongluythua;
}

bool isArmstrong(int n)
{
    if (Tongluythua(n) == n) 
        return true;
    return false;
}

int main ()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
    if (isArmstrong(n)) {
        cout << n << " la so armstrong ";
    }
    else {
        cout << n << " khong la so armstrong ";
    }
    return 0;
}