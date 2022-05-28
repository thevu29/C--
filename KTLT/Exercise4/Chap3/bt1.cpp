#include <iostream>
#include <string.h>
using namespace std;

int Max(char s[])
{
    int cnt = 0, ans = -1;
    s[strlen(s)] = ' ';

    for (int i = 0; i <= strlen(s); i++)
    {
        if (s[i] != ' ') 
            cnt++;
        else
        {
            ans = max(ans, cnt);
            cnt = 0;
        }
    }

    return ans;
}

void Find(char s[])
{
    int pos, cnt = 0, max = Max(s);
    s[strlen(s)] = ' ';

    for (int i = 0; i <= strlen(s); i++)
    {
        if (s[i] != ' ')
            cnt++;
        else 
        {
            if (cnt == max)
            {
                pos = i - max;
                break;
            }
            cnt = 0;
        }
    }

    for (int i = pos; i < pos + max; i++)   cout << s[i];
    s[strlen(s)] = '\0';
}

int main()
{
    char s[50];
    cin.getline(s, 50);
    Find(s);
    return 0;
}