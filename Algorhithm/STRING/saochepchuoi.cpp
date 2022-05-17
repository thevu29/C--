#include <iostream>
#include <string.h>
using namespace std;

int main ()
{
    char str1[25], str2[25], str3[30];
    cout << "Chuoi 1: ";
    gets(str1);
    strcpy(str2, str1);     //sao chep toan bo chuoi 1 vao chuoi 2, kh dc ghi str2 = str1
    cout << "Chuoi 2: " << str2 << endl;
    strncpy(str3, str1, 6);     //sao chep 3 ky tu dau tien cua chuoi 1 vao chuoi 3
    cout << "Chuoi 3: " << str3;
    return 0;
}