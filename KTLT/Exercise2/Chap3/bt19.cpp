#include <iostream>
#include <string.h>
using namespace std;

void Delete(char s[])
{
    int j = 0;
    
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] != ' ')
            s[j++] = s[i];
        else if (j > 0 && s[i + 1] != ' ')
            s[j++] = s[i];
    }

    if (s[j - 1] == ' ')
        s[j - 1] = '\0';
    else if (s[j] == ' ')
        s[j] = '\0';
}

void Convert(char s[])
{
    strlwr(s);
    s[0] = toupper(s[0]);
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] == ' ')
            s[i + 1] = toupper(s[i + 1]);
    }
}

int main()
{
    char s[50];
    cin.getline(s, 50);
    Delete(s);
    Convert(s);
    cout << s;
    return 0;
}