#include <iostream>
using namespace std;

int main ()
{
    char *str = "hello ";
    cout << str;
    char str1[] = "the ";
    cout << str1;
    char str2[] = {'v', 'u', '\0'};     //\0: ky tu cuoi cung ket thuc chuoi
    cout << str2;
    char st3r[4]; //khai bao chuoi co 4 ki tu trong do ki tu cuoi la \0
    //str3 = "vu ": sai 
    return 0;
}