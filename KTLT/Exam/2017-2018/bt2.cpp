#include <iostream>
#include <string.h>
#include <algorithm>
using namespace std;

void Count(char s[], int *a, int &n)
{
    int cnt = 0;
    n = 0;
    s[strlen(s)] = ' ';

    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] != ' ')
            cnt++;
        else 
        {
            a[n++] = cnt;
            cnt = 0;
        }
    }

    sort(a, a + n); 
}

int Max(char s[], int *a, int n)
{
    int max = 0, cnt = 1;

    for (int i = 1; i < n; i++)
    {
        if (a[i] == a[i - 1])
            cnt++;
        else
            cnt = 1;
        if (cnt > max)
            max = cnt;
    }

    return a[max];
}

int main()
{
    int n, a[100];
    char s[50];
    cin.getline(s, 50);
    Count(s, a, n);
    cout << Max(s, a, n);
    return 0;
}
