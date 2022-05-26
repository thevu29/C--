#include <iostream>
#include <string.h>
using namespace std;

void DeleteSpace(char str[])
{
    int j = 0;
    for (int i = 0; i < strlen(str); i++)
    {
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

void Inhoa(char str[])
{
    str[0] = toupper(str[0]);

    for (int i = 1; i < strlen(str); i++)   str[i] = tolower(str[i]);

    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == ' ')
            str[i + 1] = toupper(str[i + 1]);
    }
}

int main()
{
    char str[50];
    strcpy(str, "  ngUYEN   THe    VU    ");
    DeleteSpace(str);
    Inhoa(str);
    cout << "Ho ten hoan chinh: " << str;
    return 0;
}