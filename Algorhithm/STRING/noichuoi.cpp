#include <iostream>
#include <string.h>
using namespace std;

int main ()
{
    char ho[25], ten[25], hoten[50];
    cout << "Nhap ho: ";
    gets(ho);
    cout << "Nhap ten: ";
    gets(ten);
    strcpy(hoten, "");      //gan chuoi rong vao ho ten de tranh ky tu rac
    strcat(hoten, ho);      //noi ho vao
    strcat(hoten, " ");     //noi khoang trang
    strcat(hoten, ten);     //noi ten
    cout << "Ho va ten: " << hoten << endl;

    char str1[25], str2[25];
    strcpy(str1, "yes ");
    strcpy(str2, "or not yes ");
    strncat(str1, str2, 6); //noi 6 ky tu dau tien cua str2 vao str1
    puts(str1);
    return 0;
}