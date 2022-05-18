#include <iostream>
#include <string.h>
using namespace std;

void Cau_a(char s[])
{
    int cnt, j;
    int i = 0;

    while(i < strlen(s)) 
    {
        cnt = 0;
        j = i;

        while (j < strlen(s) && s[j] != ' ') 
        {
            cnt++;
            j++;
        }

        cout << cnt << " ";
        i = j + 1;
    }
    cout << endl;
}

void Cau_b(char s[])
{   
    int j;
    int i = 0, begin = 0, end = 0;

    while(i < strlen(s)) 
    {
        j = i;
        while (j < strlen(s) && s[j] != ' ')    j++;

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

int main ()
{
    char s[100];
    cin.getline(s, 100);
    Cau_a(s);
    Cau_b(s);
    return 0;
}