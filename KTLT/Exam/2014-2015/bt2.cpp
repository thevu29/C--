#include <iostream>
#include <string.h>
using namespace std;

int Count(char s[])
{
    int n = 1;
    for (int i = 0; i < strlen(s); i++) 
    {
        if (s[i] == ' ')
            n++;
    }
    return n;
}

void creatSubS(char s[], char s1[])
{
    int cnt = 1, n = Count(s);
    int begin, end;

    for (int i = 0; i < strlen(s); i++) 
    {
        if (s[i] == ' ' || i == strlen(s) - 1) 
        {
            cnt++;
            if (cnt == 2)
                begin = i + 1;
            else if (cnt == 5 || cnt == n + 1) 
            {
                end = i;
                break;
            }
        }
    }

    int j = 0;
    for (int i = begin; i <= end; i++)  s1[j++] = s[i];
    s1[j] = '\0';
}

void Reverse(char s[])
{
    int pos = strlen(s);
    s[-1] = ' ';
    for (int i = strlen(s) - 1; i >= 0; i--) 
    {
        if (s[i] == ' ' || s[i - 1] == ' ') 
        {
            for (int j = i; j < pos; j++)   cout << s[j];
            pos = i;
        }
    }
}

int main ()
{
    char s[257], s1[100];
    cin.getline(s, 257);
    creatSubS(s, s1);
    cout << s1 << endl;
    Reverse(s);
    return 0;
}