#include <iostream>
#include <string.h>
using namespace std;

void countWord(char s[])
{
    int cnt, j, i = 0;
    while (i < strlen(s))
    {
        cnt = 0;
        j = i;
        
        while (s[j] != ' ' && j < strlen(s))
        {
            cnt++;
            j++;
        }
        
        cout << cnt << " ";
        i = j + 1;
    }
}

void printMaxLenght(char s[])
{   
    int i = 0, beg = 0, end = 0;

    while (i < strlen(s))
    {
        int j = i;

        while (s[j] != ' ' && j < strlen(s))    
            j++;

        if (end - beg < j - i)
        {
            beg = i;
            end = j;
        }

        i = j + 1;
    }

    for (int i = beg; i < end; i++) 
        cout << s[i];
}

int main()
{
    char s[100];
    cin.getline(s, 100);
    countWord(s);
    cout << endl;
    printMaxLenght(s);
    return 0;
}