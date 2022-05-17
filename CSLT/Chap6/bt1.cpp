#include <iostream>
using namespace std;

struct PS
{
    int tu;
    int mau;
};

void Nhapmang(PS ps[], int n)
{
    for (int i = 0; i < n; i++) {
        cout << "Nhap phan so thu " << i + 1 << ": ";
        cin >> ps[i].tu >> ps[i].mau;
    }
}

int ucln(int a, int b)
{
    if (a % b == 0)
        return b;
    return ucln(b, a % b);
}

void Xuat(PS ps[], int n)
{
    cout << "\nDay phan so: ";
    for (int i = 0; i < n; i++) {
        int uc = ucln(ps[i].tu, ps[i].mau);
        ps[i].tu /= uc;
        ps[i].mau /= uc;
        cout << ps[i].tu << "/" << ps[i].mau << " ";
    }
}

int Dem(PS ps[], int n)
{
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        if (ps[i].tu * 1.0 / ps[i].mau > 0 and ps[i].tu * 1.0 / ps[i].mau < 1)
            cnt++;
    }
    return cnt;
}

void Max(PS ps[], int n)
{
    int tu = ps[0].tu, mau = ps[0].mau;
    double max = ps[0].tu * 1.0 / ps[0].mau;
    for (int i = 1; i < n; i++) {
        if (ps[i].tu * 1.0 / ps[i].mau > max) {
            max = ps[i].tu * 1.0 / ps[i].mau;
            tu = ps[i].tu;
            mau = ps[i].mau;
            int uc = ucln(tu, mau);
            tu /= uc;
            mau /= uc;
        }
    }
    cout << "\n\nPhan so co gia tri lon nhat: ";
    cout << tu << "/" << mau;
}

void Tong(PS ps[], int n)
{
    PS s = ps[0];
    for (int i = 1; i < n; i++) {
        s.tu = s.tu * ps[i].mau + ps[i].tu * s.mau;
        s.mau = s.mau * ps[i].mau;
        int uc = ucln(s.tu, s.mau);
        s.tu /= uc;
        s.mau /= uc;
    }
    cout << "\n\nTong cac phan so trong mang = ";
    cout << s.tu << "/" << s.mau;
}

int main ()
{
    int n;
    cout << "Nhap so phan tu mang: ";
    cin >> n;
    PS ps[n];
    Nhapmang(ps, n);
    Xuat(ps, n);
    cout << "\n\nSo phan so >0 va <1: " << Dem(ps, n);
    Max(ps, n);
    Tong(ps ,n);
    return 0;
}