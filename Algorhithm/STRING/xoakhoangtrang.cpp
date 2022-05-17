#include <iostream>
#include <string.h>
using namespace std;

void DeleteSpace(char str[])
{
    int j = 0;
    for (int i = 0; i < strlen(str); i++) {             //str = "  nguyen  the   vu   ";
        if (str[i] != ' ') 
            str[j++] = str[i];
        else if (j > 0 && str[i + 1] != ' ') 
            str[j++] = str[i];
    }
    if (str[j - 1] == ' ')
        str[j - 1] = '\0';
    else
        str[j] = '\0';
}

void Layten(char str[])
{
    int mark = 0;
    for (int i = strlen(str) - 1; i >= 0; i--) {            
        if (str[i] == ' ') {
            mark = i + 1;
            break;
        }
    }
    cout << "Ten: ";
    for (int i = mark; i < strlen(str); i++) {
        cout << str[i];
    }
}

int main ()
{
    char str[100];
    strcpy(str, "  nguyen  the   vu   ");    
    cout << "Chuoi ban dau:" << str << endl;
    cout << "Do dai chuoi ban dau = " << strlen(str) << endl;
    DeleteSpace(str);
    cout << "Chuoi sau khi xoa khoang trang du thua:" << str << endl;
    cout << "Do dai chuoi sau khi xoa khoang trang du thua = " << strlen(str) << endl;
    Layten(str);
    return 0;
}