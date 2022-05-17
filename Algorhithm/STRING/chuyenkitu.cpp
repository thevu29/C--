#include <iostream>
#include <string.h>
using namespace std;

int main ()
{
    char str1[50] = "nguyen the vu ";
    putchar(toupper(str1[0]));      //chuyen ki tu dau tien cua str1 thanh chu hoa
    cout << endl;
    for (int i = 0; i < strlen(str1); i++) {
        char c = str1[i];
        putchar(toupper(c));        //chuyen tung ki tu cua str1 thanh chu hoa r xuat ra 
    }
    cout << endl;
    char str2[50] = "NGUYEN THE VU ";
    for (int i = 0; i < strlen(str2); i++) {
        char d = str2[i];   
        putchar(tolower(d));        //chuyen tung ki tu cua str2 thanh chu thuong r xuat ra 
    }
    return 0;
}