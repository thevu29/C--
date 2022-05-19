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

    cout << "Cau a: " << cnt1 << " " << cnt2 << endl;
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

void Split(char s[], char str[][10])
{
    char *p;
    p = strtok(s, " ");
    int i = 0;
    while (p != NULL)
    {
        strcpy(str[i++], p);
        p = strtok(NULL, " ");
    }
}

void Sort(char str[][10], int n)
{
    char tmp[10];
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (strcmp(str[i], str[j]) > 0)
            {
                strcpy(tmp, str[i]);
                strcpy(str[i], str[j]);
                strcpy(str[j], tmp);
            }
        }
    }
}

void Output(char str[][10], int n)
{
    cout << "Cau c: ";
    for (int i = 0; i < n; i++)
        cout << str[i] << " ";
}

int main()
{
    char s[200], str[20][10];
    cin.getline(s, 200);
    int n = countWord(s);
    Count(s);
    cout << "Cau b: " << n << endl;
    Split(s, str);
    Sort(str, n);
    Output(str, n);
    return 0;
}