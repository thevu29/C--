#include <iostream>
#include <math.h>
using namespace std;

void Nhapmang(int a[], int n)
{
	for (int i = 0; i < n; i++) {
		cout << "Nhap so thu " << i + 1 << ": ";
		cin >> a[i];
	}
}

bool checkSonguyento(int n)
{  
    if (n < 2)
        return false;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
             return false;
        }
    }
    return true;
}

void xuatSonguyento(int a[], int n)
{
    for (int i = 0; i < n; i++) {
        if (checkSonguyento(a[i])) {
            cout << a[i] << " ";
        }
    }
}

int main ()
{
    int n;
    cout << "Nhap n: ";
    cin >> n;
    int a[n];
    Nhapmang(a, n);
    cout << "Cac so nguyen to trong mang: ";
    xuatSonguyento(a, n);
    return 0;
}