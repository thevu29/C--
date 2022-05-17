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
    for (int i = 0; i < n; i++)
        cout << str[i] << " ";
}

int main()
{
    char s[200], str[20][10];
    cout << "Nhap chuoi s: ";
    cin.getline(s, 200);
    int n = Count(s);
    Split(s, str);
    Sort(str, n);
    Output(str, n);
    return 0;
}