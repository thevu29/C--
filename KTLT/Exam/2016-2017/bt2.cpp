#include <iostream>
#include <string.h>
using namespace std;

int Count(char s[], int k)
{
    int i, cnt, ans = 0;
    s[strlen(s)] = ' ';

    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] != ' ')
            cnt++;
        else
        {
            if (cnt == k)   ans++;
            cnt = 0;
        }
    }

    s[strlen(s)] = '\0';
    return ans;
}

void Count1(char s[])
{
    int a[100], c[8], cnt, n = 0;
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
    
    for (int i = 1; i < 8; i++)     c[i] = 0;
    for (int i = 0; i < n; i++)     c[a[i]]++;
    for (int i = 1; i < 8; i++)
        cout << c[i] << " ";
}

int main()
{
    int k;
    char s[100];
    cin.getline(s, 50);
    cout << "k = ";
    cin >> k;
    cout << "Cau a: " << Count(s, k) << endl;
    cout << "Cau b: ";
    Count1(s);
    return 0;
}