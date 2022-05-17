#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char s[100];
    cin.getline(s, 100);
    int pos = strlen(s);
    s[-1] = ' ';
    
    for (int i = strlen(s) - 1; i >= 0; i--)
    {
        if (s[i] == ' ' || s[i - 1] == ' ')
        {
            for (int j = i; j < pos; j++)
            {
                cout << s[j];
            }
            pos = i;
        }
    }
    return 0;
}
