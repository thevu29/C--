#include <iostream>
#include <string.h>
using namespace std;

int main ()
{
    char str1[50], str2[50];
    gets(str1);
    gets(str2);
    int res = strcmp(str1, str2);     //so sanh 2 chuoi
    cout << "res = " << res << endl;
    if (res == 0)
        cout << "2 chuoi bang nhau ";
    else if (res > 0)
        cout << "chuoi 1 > chuoi 2 ";
    else  
        cout << "chuoi 1 < chuoi 2 ";
    
    int res1 = strncmp(str1, str2, 1);  //so sanh 1 ki tu dau tien cua 2 chuoi
    cout << "\nres1 = " << res1 << endl;      
    if (res1 == 0)
        cout << "2 chuoi bang nhau ";
    else if (res1 > 0)
        cout << "chuoi 1 > chuoi 2 ";
    else  
        cout << "chuoi 1 < chuoi 2 ";
    return 0;
}