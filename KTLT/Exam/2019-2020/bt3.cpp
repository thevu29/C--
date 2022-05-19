#include <iostream>
#include <string.h>
using namespace std;

void countWord(char s[])
{
    int cnt = 0;
    s[strlen(s)] = ' '; 
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] != ' ')
            cnt++;
        else
        {
            cout << cnt << " ";
            cnt = 0;
        }
    }

    s[strlen(s)] = '\0'; 
    cout << endl;
}

void printMaxLenght(char s[])
{   
    int i = 0, beg = 0, end = 0;

    while (i < strlen(s))
    {
        int j = i;

        while (s[j] != ' ' && j < strlen(s))    j++;

        if (end - beg < j - i)
        {
            beg = i;
            end = j;
        }

        i = j + 1;
    }

    for (int i = beg; i < end; i++) cout << s[i];
}

int main()
{
    char s[100];
    cin.getline(s, 100);
    countWord(s);
    printMaxLenght(s);
    return 0;
}