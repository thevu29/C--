#include <iostream>
#include <string.h>
using namespace std;

struct thongtin
{
    char ten[100];
    int sbd;
    double nn, cb, cs, s;
};

void Nhapthongtin(thongtin a[], int n)
{
    for (int i = 0; i < n; i++) {
        cout << "\nThi sinh thu " << i + 1 << ": " << endl;
        fflush(stdin);
        cout << "Ho ten: ";
        gets(a[i].ten);
        cout << "So bao danh: ";
        cin >> a[i].sbd;
        cout << "Diem mon ngoai ngu: ";
        cin >> a[i].nn;
        cout << "Diem mon co ban: ";
        cin >> a[i].cb;
        cout << "Diem mon co so: ";
        cin >> a[i].cs;
        a[i].s = a[i].nn + a[i].cb + a[i].cs;
    }
}

int Dem(thongtin a[], int n)
{
    int cnt = 0;
    double s;
    for (int i = 0; i < n; i++) {
        s = a[i].cb + a[i].cs;
        if (a[i].nn >= 5 && a[i].cb >=5 && a[i].cs >=5 && s >= 14)
            cnt++;
    }
    return cnt;
}

void Tongmax(thongtin a[], int n)
{
    double smax = 0;
    for (int i = 0; i < n; i++) {
        smax = max(smax, a[i].s);
    }
    cout << "\nKet qua cau b: ";
    for (int i = 0; i < n; i++) {
        if (a[i].s == smax)
            cout << a[i].ten << " ";
    }
}

int main ()
{
    int n;
    cout << "Nhap so thi sinh: ";
    cin >> n;
    thongtin a[n];
    Nhapthongtin(a, n);
    cout << "Ket qua cau a: " << Dem(a, n);
    Tongmax(a, n);
    return 0;
}