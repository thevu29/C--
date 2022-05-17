#include <iostream>
#include <string.h>
using namespace std;

void Inhoa(char *s)
{
    s[0] = toupper(s[0]);
    for (int i = 1; i < strlen(s); i++)
    {
        if (s[i] == ' ')
            s[i + 1] = toupper(s[i + 1]);
    }
}

int main()
{
    int n;
    cin >> n;
    char **s = new char *[n];

    for (int i = 0; i < n; i++)
    {
        s[i] = new char[100];
        cout << "Nguoi thu " << i + 1 << ": ";
        fflush(stdin);
        gets(s[i]);
    }

    for (int i = 0; i < n; i++)
    {
        Inhoa(s[i]);
        cout << s[i] << endl;
    }
    
    return 0;
}