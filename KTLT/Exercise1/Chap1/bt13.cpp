#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char str[100];
    cin.getline(str, 100);
    int cnt = 0;
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] >= 'A' && str[i] <= 'z')
            cnt++;
    }
    cout << cnt;
    return 0;
}