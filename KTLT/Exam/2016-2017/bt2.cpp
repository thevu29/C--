#include <iostream>
#include <string.h>
using namespace std;

int Count(char s[], int k)
{
    int cnt, ans = 0;
    for (int i = 0; i < strlen(s); i++)
    {
        cnt = 0;
        int j = i;

        while (s[j] != ' ' && j < strlen(s))
        {
            cnt++;
            j++;
        }

        if (cnt == k)
            ans++;
        
        i = j;
    }
    return ans;
}

void Count1(char s[])
{
    int a[100];
    for (int i = 0; i < 7; i++)
        a[i] = Count(s, i + 1);
    for (int i = 0; i < 7; i++)
        cout << a[i] << " ";
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