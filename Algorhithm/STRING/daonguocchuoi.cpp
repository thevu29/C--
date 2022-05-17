#include <iostream>
#include <string.h>
using namespace std;

int main ()
{
    char s[50];
    gets(s);
    cout << "Dao nguoc cua chuoi: ";
    for(int i = strlen(s) - 1; i >= 0; i--) {
        cout << s[i];
    }
    return 0;
}