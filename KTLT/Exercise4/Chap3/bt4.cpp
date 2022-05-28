#include <iostream>
#include <string.h>
using namespace std;

void Delete(char s[])
{
    int l, p;
    cin >> l >> p;

    int j = 0;
    for (int i = 0; i < strlen(s); i++)
    {
        if (i != p)
            s[j++] = s[i];
        else
           i = i + l - 1;
    }
    s[j] = '\0';
}

int main ()
{
    char s[50];
    cin.getline(s, 50);
    Delete(s);
    cout << s;
    return 0;
}