#include <iostream>
#include <string.h>
using namespace std;

struct hs
{
    string ten;
    double t, l, h, dtb;
};

void Nhap(hs ds[], int n)
{
    cout << "Nhap thong tin hoc sinh: " << endl;
    for (int i = 0; i <  n; i++) {
        cin.ignore();
        cout << "Ho ten: ";
        getline(cin, ds[i].ten);
        cout << "Nhap diem 3 mon: ";
        cin >> ds[i].t >> ds[i].l >> ds[i].h;
        ds[i].dtb = (ds[i].t + ds[i].l + ds[i].h) / 3;
    }
}

void Xuat(hs ds[], int n)
{
    for (int i = 0; i < n; i++) {
        cout << "Sinh vien thu " << i + 1 << ": " << endl;
        cout << "\tHo ten: " << ds[i].ten << endl;
        cout << "\tDiem toan: " << ds[i].t << endl;
        cout << "\tDiem li: " << ds[i].l << endl;
        cout << "\tDiem hoa: " << ds[i].h << endl;
        cout << "\tDiem trung binh: " << ds[i].dtb << endl;
    }
}

void Max(hs ds[], int n)
{
    cout << "\nNhung hoc sinh co diem trung binh lon nhat: ";
    int max = ds[0].dtb;
    for (int i = 1; i < n; i++) {
        if (ds[i].dtb > max)
            max = ds[i].dtb;
    }
    for (int i = 0; i < n; i++) {
        if (ds[i].dtb == max)
            cout << ds[i].ten << " ";
    }
    cout << endl;
}

void Add(hs ds[], int& n)
{
    hs addhs;
    int x;
    cout << "\nNhap vi tri muon them hoc sinh: ";
    cin >> x;
    cout << "Nhap thong tin hoc sinh them vao: " << endl;
    cin.ignore();
    cout << "Ho ten: ";
    getline(cin, addhs.ten);
    cout << "Nhap diem 3 mon: ";
    cin >> addhs.t >> addhs.l >> addhs.h;
    addhs.dtb = (addhs.t + addhs.l + addhs.h) / 3;

    for (int i = n; i > x - 1; i--) {
        ds[i].ten = ds[i - 1].ten;
        ds[i].t = ds[i - 1].t;
        ds[i].l = ds[i - 1].l;
        ds[i].h = ds[i - 1].h;
        ds[i].dtb = ds[i - 1].dtb;
    }

    ds[x - 1].ten = addhs.ten;
    ds[x - 1].t = addhs.t;
    ds[x - 1].l = addhs.l;
    ds[x - 1].h = addhs.h;
    ds[x - 1].dtb = addhs.dtb;

    n++;
    cout << "\nDANH SACH SAU KHI THEM HS: " << endl;
    Xuat(ds, n);
}

void Swap(double& a, double& b)
{
    double tmp = a;
    a = b;
    b = tmp;
}

void Sort(hs ds[], int n)
{
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (ds[i].dtb > ds[j].dtb) {
                string tmp = ds[i].ten;
                ds[i].ten = ds[j].ten;
                ds[j].ten = tmp;
                Swap(ds[i].t, ds[j].t);
                Swap(ds[i].l, ds[j].l);
                Swap(ds[i].h, ds[j].h);
                Swap(ds[i].dtb, ds[j].dtb);
            }
        }
    }
    cout << "\nDANH SACH SAU KHI SAP XEP THEO DTB: " << endl;
    Xuat(ds, n);
}

int main ()
{
    int n;
    cout << "n = ";
    cin >> n;
    hs ds[n];
    Nhap(ds, n);
    cout << "\nDANH SACH THONG TIN SINH VIEN: " << endl;
    Xuat(ds, n);
    Max(ds, n);
    Add(ds, n);
    Sort(ds, n);
    return 0;
}