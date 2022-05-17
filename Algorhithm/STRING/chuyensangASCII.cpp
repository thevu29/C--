#include <iostream>
#include <string.h>
using namespace std;

int main ()
{
    char str1[50];
    cout << "Nhap chuoi: ";
    gets(str1);
    for (int i = 0; i < strlen(str1); i++) {
        char c = str1[i];
        int asc = (int) c;
        cout << c << " co ma ascii: " << asc << endl;
    }
    return 0;
}