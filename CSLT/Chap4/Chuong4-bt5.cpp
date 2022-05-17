#include <iostream>
using namespace std;

int Chieunguoc(int n)
{
    if (n == 0) 
        return 0;
    int daonguoc = 0;
    while (n > 0) {
        daonguoc = daonguoc * 10 + n % 10;;
        n = n / 10;
    }
    return daonguoc;
}

int Chusolonnhat(int n)
{
    if (n == 0)
        return 0;
    int max = 0;
    while (n > 0) {
        int a = n % 10;
        n = n / 10;
        if (a > max) 
            max = a;
    }
    return max;
}

int Tongcacchuso(int n)
{
    int sum = 0;
    while (n > 0) {
        int a = n % 10;
        sum += a;
        n = n / 10;
    }
    return sum;
}

int Demchuso(int n)
{
    int dem = 0;
    while (n > 0) {
        dem++;
        n = n / 10;
    }
    return dem;
}

int main ()
{
    int n;
    cout << "Nhap n: ";
    cin >> n;
    cout << "Cac chu so cua " << n << " theo chieu nguoc lai: " << Chieunguoc(n);
    cout << "\nChu so lon nhat cua " << n << ": " << Chusolonnhat(n);
    cout << "\nTong cac chu so cua " << n << " = " << Tongcacchuso(n);
    cout << "\nSo " << n << " co " << Demchuso(n) << " chu so "; 
    return 0;
}