#include <iostream>
using namespace std;

int tongcac_uoc(int n) 
{
    int s = 0;
    for (int i = 1; i < n; i++) {
        if (n % i == 0) {
            s += i;
        }
    }
    return s;
}

bool kiemtraSohoanthien(int n)
{
    if (tongcac_uoc(n) == n) 
        return true;
    return false;
}

bool ktraSothinhvuong(int n)
{
    if (tongcac_uoc(n) > n)
        return true;
    return false;
}

int main ()
{
    int n;
    cout << "Nhap n: ";
    cin >> n;
    if (kiemtraSohoanthien(n) == true) 
        cout << n << " la so hoan thien " << endl;
    else 
        cout << n << " khong la so hoan thien " << endl;
    if (ktraSothinhvuong(n) == true) 
        cout << n << " la so thinh vuong ";
    else 
        cout << n << " khong la so thinh vuong ";
    return 0;
}