#include <iostream>
#include <string.h>
using namespace std;

int Check(char s[], char x[])
{
    int tmp, j, cnt;

    for (int i = 0; i < strlen(s); i++)
    {
        j = 0;
        
        if (s[i] == x[j])
        {
            cnt = 1;
            tmp = i + 1;

            for (int j = 1; j < strlen(x); j++)
            {   
                if (s[tmp] == x[j]) 
                {
                    cnt++;
                    tmp++;
                }
                else    
                    break;
            }
        }   

        if (cnt == strlen(x))   
            return i;
    }
    
    return -1;
}

int main ()
{
    char s[50], x[25];
    cout << "s: ";
    cin.getline(s, 50);
    cout << "x: ";
    cin.getline(x, 25);
    cout << Check(s, x);
    return 0;
}