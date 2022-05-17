#include <iostream>
using namespace std;

struct PS
{
    int tu;
    int mau;
};

void Nhap(PS ps[], int n)
{
    for (int i = 0; i < n; i++) {
        cin >> ps[i].tu >> ps[i].mau;
    }
}

int ucln(int a, int b)
{
    if (a % b == 0)
        return b;
    return ucln(b, a % b);
}

void Toigian(int& c, int& d)
{
    int uc = ucln(c, d);
    c /= uc;
    d /= uc;
}

void Xuat(PS ps[], int n)
{
    for (int i = 0; i < n; i++) {
        Toigian(ps[i].tu, ps[i].mau);
        cout << ps[i].tu << "/" << ps[i].mau << " ";
    }
}

void Cau_a(PS ps[], int n)
{
    PS s = ps[0];
    for (int i = 1; i < n; i++) {
        s.tu = s.tu * ps[i].mau + ps[i].tu * s.mau;
        s.mau = s.mau * ps[i].mau;
        Toigian(s.tu, s.mau);
    }
    cout << "\nKet qua cau a: " << s.tu << "/" << s.mau;
}

void Swap(int& a, int& b)
{
    int tmp = a;
    a = b;
    b = tmp;
}

void Cau_b(PS ps[], int n)
{
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n ; j++) {
            if ((ps[i].tu * 1.0 / ps[i].mau) > (ps[j].tu * 1.0 /ps[j].mau)) {
                Swap(ps[i].tu, ps[j].tu);
                Swap(ps[i].mau, ps[j].mau);
            }
        }
    }
    cout << "\nKet qua cau b: ";
    Xuat(ps, n);
}

int main ()
{
    int n;
    cout << "n = ";
    cin >> n;
    PS ps[n];
    Nhap(ps, n);
    Xuat(ps, n);
    Cau_a(ps, n);
    Cau_b(ps, n);
    return 0;
}