#include <iostream>
#include <string.h>
using namespace std;

struct Sinhvien
{
    char mssv[8], ten[30], gioitinh[4], diachi[50];
    float m1, m2, m3, m4, m5, m6;
};

void Nhap(Sinhvien ds[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cin.ignore();
        cout << "Nhap mssv: ";
        cin.getline(ds[i].mssv, 8);
        cout << "Nhap ho ten sv: ";
        cin.getline(ds[i].ten, 30);
        cout << "Nhap gioi tinh: ";
        cin.getline(ds[i].gioitinh, 5);
        cout << "Nhap dia chi: ";
        cin.getline(ds[i].diachi, 50);
        cout << "Nhap diem 6 mon: ";
        cin >> ds[i].m1 >> ds[i].m2 >> ds[i].m3 >> ds[i].m4 >> ds[i].m5 >> ds[i].m6;
    }
}

void Xuat(Sinhvien ds[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "\tSinh vien thu " << i + 1 << ": " << endl;
        cout << "Mssv: " << ds[i].mssv << endl;
        cout << "Ho ten: " << ds[i].ten << endl;
        cout << "Gioi tinh: " << ds[i].gioitinh << endl;
        cout << "Dia chi: " << ds[i].diachi << endl;
        cout << "Diem mon 1: " << ds[i].m1 << endl;
        cout << "Diem mon 2: " << ds[i].m2 << endl;
        cout << "Diem mon 3: " << ds[i].m3 << endl;
        cout << "Diem mon 4: " << ds[i].m4 << endl;
        cout << "Diem mon 5: " << ds[i].m5 << endl;
        cout << "Diem mon 6: " << ds[i].m6 << endl;
    }
}

void Search(Sinhvien ds[], int n)
{
    char k[8];
    cin.ignore();
    cout << "\nNhap mssv muon tim: ";
    cin.getline(k, 8);
    for (int i = 0; i < n; i++)
    {
        if (strcmp(ds[i].mssv, k) == 0)
        {
            cout << "Mssv: " << ds[i].mssv << endl;
            cout << "Ho ten: " << ds[i].ten << endl;
            cout << "Gioi tinh: " << ds[i].gioitinh << endl;
            cout << "Dia chi: " << ds[i].diachi << endl;
            cout << "Diem mon 1: " << ds[i].m1 << endl;
            cout << "Diem mon 2: " << ds[i].m2 << endl;
            cout << "Diem mon 3: " << ds[i].m3 << endl;
            cout << "Diem mon 4: " << ds[i].m4 << endl;
            cout << "Diem mon 5: " << ds[i].m5 << endl;
            cout << "Diem mon 6: " << ds[i].m6 << endl;
        }
    }
}

void Add(Sinhvien ds[], int n)
{
    int k;
    cout << "\nNhap vi tri sv muon them vao: ";
    cin >> k;

    for (int i = k - 1; i < n; i++)
    {
        strcpy(ds[i + 1].mssv, ds[i].mssv);
        strcpy(ds[i + 1].ten, ds[i].ten);
        strcpy(ds[i + 1].gioitinh, ds[i].gioitinh);
        strcpy(ds[i + 1].diachi, ds[i].diachi);
        ds[i + 1].m1 = ds[i].m1;
        ds[i + 1].m2 = ds[i].m2;
        ds[i + 1].m3 = ds[i].m3;
        ds[i + 1].m4 = ds[i].m4;
        ds[i + 1].m5 = ds[i].m5;
        ds[i + 1].m6 = ds[i].m6;
    }

    cout << "Nhap thong tin sv muon them vao: " << endl;
    cin.ignore();
    cout << "Nhap mssv: ";
    cin.getline(ds[k - 1].mssv, 8);
    cout << "Nhap ho ten sv: ";
    cin.getline(ds[k - 1].ten, 30);
    cout << "Nhap gioi tinh: ";
    cin.getline(ds[k - 1].gioitinh, 5);
    cout << "Nhap dia chi: ";
    cin.getline(ds[k - 1].diachi, 50);
    cout << "Nhap diem 6 mon: ";
    cin >> ds[k - 1].m1 >> ds[k - 1].m2 >> ds[k - 1].m3 >> ds[k - 1].m4 >> ds[k - 1].m5 >> ds[k - 1].m6;
    cout << "\n\t\tDANH SACH SINH VIEN SAU KHI THEM: " << endl;
    n++;
    Xuat(ds, n);
}

void Delete(Sinhvien ds[], int n)
{
    int k;                                 
    cout << "\nNhap vi tri sv muon xoa: "; 
    cin >> k;

    for (int i = k - 1; i < n - 1; i++)
    {
        strcpy(ds[i].mssv, ds[i + 1].mssv);
        strcpy(ds[i].ten, ds[i + 1].ten);
        strcpy(ds[i].gioitinh, ds[i + 1].gioitinh);
        strcpy(ds[i].diachi, ds[i + 1].diachi);
        ds[i].m1 = ds[i + 1].m1;
        ds[i].m2 = ds[i + 1].m2;
        ds[i].m3 = ds[i + 1].m3;
        ds[i].m4 = ds[i + 1].m4;
        ds[i].m5 = ds[i + 1].m5;
        ds[i].m6 = ds[i + 1].m6;
    }

    cout << "\n\t\tDANH SACH SINH VIEN SAU KHI XOA: " << endl;
    n--;
    Xuat(ds, n);
}

void xuat_NoDiem(Sinhvien ds[], int n)
{
    cout << "\n\t\tDANH SACH SINH VIEN NO DIEM: " << endl;
    for (int i = 0; i < n; i++)
    {
        if (ds[i].m1 < 5 || ds[i].m2 < 5 || ds[i].m3 < 5 || ds[i].m4 < 5 || ds[i].m5 < 5 || ds[i].m6 < 5)
        {
            cout << "Mssv: " << ds[i].mssv << endl;
            cout << "Ho ten: " << ds[i].ten << endl;
            cout << "Gioi tinh: " << ds[i].gioitinh << endl;
            cout << "Dia chi: " << ds[i].diachi << endl;
            cout << "Diem mon 1: " << ds[i].m1 << endl;
            cout << "Diem mon 2: " << ds[i].m2 << endl;
            cout << "Diem mon 3: " << ds[i].m3 << endl;
            cout << "Diem mon 4: " << ds[i].m4 << endl;
            cout << "Diem mon 5: " << ds[i].m5 << endl;
            cout << "Diem mon 6: " << ds[i].m6 << endl;
        }
    }
}

int main()
{
    Sinhvien ds[150];
    int n;
    cout << "Nhap so sinh vien: ";
    cin >> n;
    Nhap(ds, n);
    cout << "\n\t\tDANH SACH SINH VIEN: " << endl;
    Xuat(ds, n);
    // Search(ds, n);
    Add(ds, n);
    // Delete(ds, n);
    // xuat_NoDiem(ds, n);
    return 0;
}