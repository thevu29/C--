#include <iostream>
#include <string.h>
using namespace std;

void Count1(char s[])
{
    int cnt1 = 0, cnt2 = 0;
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] == ' ')
            cnt1++;
        if (s[i] == ',' || s[i] == '.' || s[i] == '?' || s[i] == '!' || s[i] == ':' || s[i] == ';')  
            cnt2++;
    }
    cout << cnt1 << " " << cnt2 << endl;
}

void Count2(char s[])
{
    int cnt;
    for (int i = 0; i < strlen(s); i++)
    {
        cnt = 0;
        int j = i;

        while (s[j] != ' ' && j < strlen(s))
        {
            if (s[j] != ',' && s[j] != '.' && s[j] != '?' && s[j] != '!' && s[j] != ':' && s[j] != ';')
                cnt++;
            j++;
        }

        cout << cnt << " ";
        i = j;
    }
    cout << endl;
}

void MaxLength(char s[])
{
    int begin = 0, end = 0;
    for (int i = 0; i < strlen(s); i++)
    {
        int j = i, pos = j;

        while (s[j] != ' ' && j < strlen(s))
        {
            if (s[j] != ',' && s[j] != '.' && s[j] != '?' && s[j] != '!' && s[j] != ':' && s[j] != ';')
                pos++;
            j++;
        }

        if (end - begin < pos - i)
        {
            begin = i;
            end = pos;
        }
        
        i = j;
    }

    for (int i = begin; i < end; i++)
        cout << s[i];
}

int main()
{
    char s[200];
    cin.getline(s, 200);
    Count1(s);
    Count2(s);
    MaxLength(s);
    return 0;
}