#include <iostream>
using namespace std;

struct PS
{
    int tu;
    int mau;
};

void Nhapmang(PS ps[][100], int m, int n)
{
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n;j ++) {
            cout << "Nhap phan so o vi tri " << i + 1 << j + 1 << ": ";
            cin >> ps[i][j].tu >> ps[i][j].mau;
        }
    }
}

int ucln(int a, int b)
{
    if (a % b == 0)
        return b;
    return ucln(b, a % b);
}

void Xuatmang(PS ps[][100], int m, int n)
{
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n;j ++) {
            cout << ps[i][j].tu << "/" << ps[i][j].mau << " ";
        }
        cout << endl;
    }
}

void Max(PS ps[][100], int m, int n)
{
    int tu = ps[0][0].tu;
    int mau = ps[0][0].mau;
    double max = ps[0][0].tu * 1.0 / ps[0][0].mau;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (ps[i][j].tu * 1.0 / ps[i][j].mau > max) {
                max = ps[i][j].tu * 1.0 / ps[i][j].mau;
                tu = ps[i][j].tu;
                mau = ps[i][j].mau;
                int uc = ucln(tu, mau);
                tu /= uc;
                mau /= uc;
            }
        }
    }
    cout << "Phan so co gia tri lon nhat: ";
    cout << tu << "/" << mau;
}

void Sum(PS ps[][100], int m, int n)
{
    PS s = ps[0][0];
    for (int i = 0; i < 1; i++) {
        for (int j = 1; j < n; j++) {
            s.tu = s.tu * ps[i][j].mau + ps[i][j].tu * s.mau;
            s.mau = s.mau * ps[i][j].mau;
        }
    }
    for (int i = 1; i < m; i++) {
        for (int j = 0; j < n; j++) {
            s.tu = s.tu * ps[i][j].mau + ps[i][j].tu * s.mau;
            s.mau = s.mau * ps[i][j].mau;
            int uc = ucln(s.tu, s.mau);
            s.tu /= uc;
            s.mau /= uc;
        }
    }
    cout << "\nTong cac phan so cua mang = ";
    cout << s.tu << "/" << s.mau;
}

int main ()
{
    int m, n;
    cout << "Nhap so dong: ";
    cin >> m;
    cout << "Nhap so cot: ";
    cin >> n;
    PS ps[100][100];
    Nhapmang(ps, m, n);
    Xuatmang(ps, m, n);
    Max(ps, m, n);
    Sum(ps, m, n);
    return 0;
}