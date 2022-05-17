#include <iostream>
#include <string.h>
using namespace std;

void Laytrai(char s[], char sleft[], char sright[])
{
    char *p = strchr(s, ' ');
    strncpy(sleft, s, p - s);
    cout << sleft << endl;
    sright = p + 1;
    cout << sright << endl; 
}

void Layphai(char s[], char sleft[])
{
    int mark = 0;
    for (int i = strlen(s) - 1; i >= 0; i--) {  
        if (s[i] == ' ') {
            mark = i + 1;
            break;
        }
    }
    for (int i = mark; i < strlen(s); i++) {
        cout << s[i];
    }
    cout << endl;   
    strncpy(sleft, s, mark);
    cout << sleft;
}

int main ()
{
    char s[100], sleft[50], sright[50];
    cout << "Nhap chuoi: ";
    gets(s);
    cout << "Lay trai nhat: " << endl;
    Laytrai(s, sleft, sright);
    cout << "Lay phai nhat: " << endl;
    Layphai(s, sleft);
    return 0;
}