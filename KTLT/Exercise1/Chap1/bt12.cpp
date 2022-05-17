#include <iostream>
#include <string.h>
using namespace std;

void Convert(char str[])
{
    strlwr(str);
    str[0] = toupper(str[0]);

    for (int i = 1; i < strlen(str); i++)
    {
        if (str[i] == ' ')
            str[i + 1] = toupper(str[i + 1]);
    }
    
    cout << str;
}

void Count(char str[])
{
    int cnt1 = 0, cnt2 = 0, cnt3 = 0, cnt4 = 0;

    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == ' ')
            cnt1++;
        else if (str[i] >= '0' && str[i] <= '9')
            cnt2++;
        else if (str[i] >= 'A' && str[i] <= 'z')
            cnt3++;
        else
            cnt4++;
    }

    cout << "So khoang trang: " << cnt1 << endl;
    cout << "So ky so: " << cnt2 << endl;
    cout << "So chu cai latin: " << cnt3 << endl;
    cout << "So ky tu khac: " << cnt4 << endl;
    cout << "So luong tu cua chuoi: " << cnt1 + 1 << endl;
}

int main()
{
    char str[100];
    cin.getline(str, 100);
    Count(str);
    Convert(str);
    return 0;
}