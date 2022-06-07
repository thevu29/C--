#include <iostream>
#include <string.h>
#include <algorithm>
using namespace std;

void createArrA(char s[], int a[], int &n)
{
    n = 0;
    int cnt, i = 0;
    while (i < strlen(s))
    {
        cnt = 0;
        int j = i;

        while (s[j] != ' ' && j < strlen(s))
        {
            cnt++;
            j++;
        }

        a[n++] = cnt;
        i = j + 1;
    }
}

int Max(int a[], int n)
{
    int pos, cnt = 1, max = 0;
    a[n] = -1;

    for (int i = 0; i < n; i++)
    {
        if (a[i + 1] == a[i])
            cnt++;
        else
        {
            if (cnt > max)
            {
                max = cnt;
                pos = i;
            }
            cnt = 1;
        }
    }

    return a[pos];
}

int main()
{
    int n, a[100];
    char s[100];
    cin.getline(s, 100);
    createArrA(s, a, n);
    sort(a, a + n);
    cout << Max(a, n);
    return 0;
}
