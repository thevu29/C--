#include <iostream>
#include <string.h>
using namespace std;

int Count(char s[], char x[])
{
    int tmp, j, cnt, ans = 0;

    for (int i = 0; i < strlen(s); i++)
    {
        j = 0;

        if (s[i] == x[j])
        {
            cnt = 1;
            tmp = i + 1;

            for (j = 1; j < strlen(x); j++)
            {   
                if (s[tmp] == x[j]) 
                {
                    cnt++;
                    tmp++;
                }
                else    
                    break;
            }

            if (cnt == strlen(x)) 
            {
                ans++;
                i = tmp;
            }
        }   
    }
    
    return ans;
}

int main ()
{
    char s[50], x[25];
    cout << "s: ";
    cin.getline(s, 50);
    cout << "x: ";
    cin.getline(x, 25);
    cout << Count(s, x);
    return 0;
}