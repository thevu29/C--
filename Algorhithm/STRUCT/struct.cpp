#include <iostream>
#include <string.h>
using namespace std;

struct Diachi
{
	char Sonha[25];
	char Duong[250];
	char Quan[25];
	char Tinhthanh[50];	
};

struct Sinhvien		//cau truc co the chua cau truc khac
{
	char tenSV[50];
	char maSV[50];
	bool Gioitinh;
	Diachi Diachinha;
	Diachi Diachitruong;
}vu, thevu;		//tao ra 2 ten struct co cung kieu cau truc Sinhvien nhung co dia chi khac nhau, truong hop nay it dung vi kh biet trc

int main(int argc, char** argv) 
{
	char ten[] = "Nguyen The Vu ";
	char ma[] = "3121410580 ";
	strcpy(vu.tenSV, ten);
	strcpy(vu.maSV, ma);
	vu.Gioitinh = false;
	cout << "Ho va ten cua Vu: " << vu.tenSV << endl;
	cout << "MSSV: " << vu.maSV << endl;
	cout << "Gioi tinh: " << (vu.Gioitinh == true ? "Nu " : "Nam ") << endl;
	
	Sinhvien TheVu;		//khai bao ten struct moi, truong hop nay thuong hay xai
	char ten1[] = "Vu Nguyen The ";
	strcpy(TheVu.tenSV, ten1);
	cout << "Ho va ten cua TheVu: " << TheVu.tenSV;
	return 0;
	return 0;
}
