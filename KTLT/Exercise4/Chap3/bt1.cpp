#include <iostream>
#include <string.h>
using namespace std;

void Max(char s[])
{   
    int i = 0, begin = 0, end = 0;

    while (i < strlen(s))
    {
        int j = i;

        while (s[j] != ' ' && j < strlen(s))    
            j++;

        if (end - begin < j - i)
        {
            begin = i;
            end = j;
        }

        i = j + 1;
    }

    for (int i = begin; i < end; i++) 
        cout << s[i];
}

int main()
{
    char s[50];
    cin.getline(s, 50);
    Max(s);
    return 0;
}