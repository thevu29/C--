#include <iostream>
#include <string.h>
using namespace std;

void Count(char s[])
{
    int cnt1 = 0, cnt2 = 0;

    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] != ' ')
        {
            if (s[i] == 'a' || s[i] == 'i' || s[i] == 'o' || s[i] == 'e' || s[i] == 'u')
                cnt1++;
            else
                cnt2++;
        }
    }

    cout << cnt1 << " " << cnt2 << endl;
}

int countWord(char s[])
{
    int cnt = 1;
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] == ' ')
            cnt++;
    }
    return cnt;
}

void Split(char s[], string str[])
{
    char *p = strtok(s, " ");
    int i = 0;
    while (p != NULL)
    {
        str[i++] = p;
        p = strtok(NULL, " ");
    }
}

void Swap(string &s1, string &s2)
{
    string tmp = s1;
    s1 = s2;
    s2 = tmp;
}

void Sort(string str[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (str[i] > str[j])
                Swap(str[i], str[j]);
        }
    }

    for (int i = 0; i < n; i++)
        cout << str[i] << " ";
}

int main()
{
    char s[200];
    string str[20];
    cin.getline(s, 200);
    int n = countWord(s);
    Count(s);
    cout << n << endl;
    Split(s, str);
    Sort(str, n);
    return 0;
}