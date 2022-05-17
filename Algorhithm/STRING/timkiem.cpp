#include <iostream>
#include <string.h>
using namespace std;

int main ()
{
    char h, str1[50], str2[25];
    cout << "Nhap chuoi 1: ";
    gets(str1);
    cout << "Nhap ki tu muon tim: ";
    cin >> h;
    char *p1 = strchr(str1, h);    //tim va tra ve ki tu dau tien tim thay trong chuoi 1
    if (p1 == NULL)
        cout << "Khong tim thay \'" << h << "\' trong chuoi 1";
    else                                                                     //p1 tro den vi tri dau tien tim thay ki tu, str1 tro den vi tri dau tien trong chuoi
        cout << "Tim thay \'" << h << "\' o vi tri " << p1 - str1;          //p1 - str1: khoang cach giua p va str1 (vi tri ki tu ma p1 tro toi)
    fflush(stdin);
    cout << "\nNhap chuoi muon tim: ";
    gets(str2);
    char *p2 = strstr(str1, str2);   //tim va tra ve chuoi dau tien tim thay trong chuoi 1
    if (p2 == NULL)
        cout << "Khong tim thay chuoi " << str2;
    else 
        cout << "Tim thay \"" << str2 << "\" o vi tri " << p2 - str1;
    return 0;
}