#include <iostream>
#include <string.h>
using namespace std;

void Input(char s[], char s1[], char s2[])
{
    cout << "s: ";
    cin.getline(s, 50);
    cout << "s1: ";
    cin.getline(s1, 25);
    cout << "s2: ";
    cin.getline(s2, 25);
}

void Replace(char s[], char s1[], char s2[])
{
    char ans[50];
    int x = 0;

    for (int i = 0; i < strlen(s); i++)
    {
        int j = 0;

        if (s[i] == s1[j])
        {
            int cnt = 1, tmp = i + 1;

            for (int j = 1; j < strlen(s1); j++)
            {
                if (s[tmp] != s1[j])   
                    break;
                else 
                {
                    tmp++;
                    cnt++;
                }
            }

            if (cnt == strlen(s1))
            {
                int k = 0;
                while (k < strlen(s2))  
                    ans[x++] = s2[k++];
                i = tmp;
            }
        }

        ans[x++] = s[i];
    } 
    
    ans[x] = '\0';
    strcpy(s, ans);
}

int main ()
{
    char s[50], s1[25], s2[25];
    Input(s, s1, s2);
    Replace(s, s1, s2);
    cout << s;
    return 0;
}