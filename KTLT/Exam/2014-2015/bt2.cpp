#include <iostream>
#include <string.h> 
using namespace std;

void Create(char s[])
{
    int begin, end, cnt = 0;

    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] == ' ' || i == strlen(s) - 1)
        {
            cnt++;
            
            if (cnt == 1)
                begin = i + 1;

            if (cnt == 4)
            {
                end = i - 1;
                break;
            }

            else if (i == strlen(s) - 1)
                end = i;
        }
        
    }
    for (int i = begin; i <= end; i++)
        cout << s[i];
}

void Reverse(char s[])  
{
    int pos = strlen(s);
    for (int i = strlen(s) - 1; i >= 0; i--)
    {
        if (s[i] == ' ' || s[i - 1] == ' ' || i == 0)
        {
            for (int j = i; j < pos; j++)
                cout << s[j];
            pos = i ;
        }
    }
}

int main()
{
    char s[100];
    cin.getline(s, 100);
    Create(s);
    cout << endl;
    Reverse(s);
    return 0;
}