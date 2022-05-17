#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    int j = 0;
    char str[50], str1[50];
    cout << "Nhap chuoi: ";
    gets(str);
    for (int i = strlen(str) - 1; i >= 0; i--)
    {
        str1[j++] = str[i];
    }
    str1[j] = '\0';
    if (strcmp(str, str1) == 0)
        cout << "Chuoi doi xung ";
    else
        cout << "Chuoi khong doi xung ";
    return 0;
}