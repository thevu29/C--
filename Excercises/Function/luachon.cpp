#include <iostream>
#include <math.h>
using namespace std;

int Sum(long n)
{
    int s = 0;
    while (n > 0) {
        s += n % 10;
        n /= 10;
    }
    return s;
}

int Demchusochan(long n)
{
    int cnt = 0;
    while (n > 0) {
        int tmp = n % 10;
        if (tmp % 2 == 0)
            cnt++;
        n /= 10;
    }
    return cnt;
}

int Soganh(long n)
{
    int tmp = n, daonguoc = 0;
    while (tmp > 0) {
        daonguoc = daonguoc * 10 + tmp % 10;
        tmp /= 10;
    }
    if (daonguoc == n)
        return 1;
    return 0;
}

int Tangdan(long n)
{
    int socuoi, kecuoi;
    socuoi = n % 10;
    while (n > 0) {
        kecuoi = n % 10;
        if (socuoi < kecuoi) {
            return 0;
            break;
        }
        else 
            socuoi = kecuoi;
        n /= 10;
    }
    return 1;
}

int main ()
{
    long n;
    int luachon;
    cout << "Nhap so co 5 chu so: ";
    cin >> n;
    if (n < pow(10, 4) || n > 99999)
        return -1;
    cout << "1. Tinh tong cac chu so " << endl;
    cout << "2. Dem so luong chu so chan " << endl;
    cout << "3. Kiem tra xem so vua nhap co phai so ganh hay khong " << endl;
    cout << "4. Cac chu so co tang dan tu ben trai sang hay khong " << endl;
    cout << "5. Thoat chuong trinh " << endl;
    cout << "Chon 1 trong 5 lua chon tren: ";
    cin >> luachon;
    if (luachon == 1) 
        cout << "Tong cac chu so cua " << n << " = " << Sum(n);
    if (luachon == 2) 
        cout << "So luong chu so chan cua " << n << " la: " << Demchusochan(n);
    if (luachon == 3) {
        if (Soganh(n) == 1)
            cout << n << " la so ganh ";
        else 
            cout << n << " khong la so ganh ";
    }
    if (luachon == 4) {
        if (Tangdan(n) == 1)
            cout << "Cac chu so cua " << n << " tang dan tu trai sang ";
        else    
            cout << "Cac chu so cua " << n << " khong tang dan tu trai sang ";
    }
    if (luachon == 5)
        return -1;
    return 0;
}