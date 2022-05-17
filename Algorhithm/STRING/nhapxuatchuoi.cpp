#include <iostream>
#include <string.h>
using namespace std;

int main ()
{
    char str[50];
    cout << "Nhap str: ";
    gets(str);
    //cin.getline(str, 50);
    cout << "Chuoi str: " << str;
    //puts(str); :xuat chuoi

    char *str1 = new char[50];
    cout << "\nNhap str1: ";
    cin.getline(str1, 50);
    puts(str1);
    cout << "Do dai that cua chuoi str1: " << strlen(str1);
    return 0;
}