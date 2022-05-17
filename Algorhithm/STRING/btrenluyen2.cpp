#include <iostream>
#include <string.h>
using namespace std;

bool Check(char *p)
{
    int mark = 0, j = 0;
    for (int i = strlen(p) - 1; i >= 0; i--) {
        if (p[i] == ';') {
            mark = i + 1;
            break;
        }
    }
    char str[10];
    for (int i = mark; i < strlen(p); i++) {
        str[j] = p[i];
        j++;
    }
    str[j] = '\0';
    if (strcmp(str, "Male ") == 0)
        return false;
    return true;
}

int main ()
{
    int cnt1 = 0, cnt2 = 0;
    char **p = new char*[5];
    for (int i = 0; i < 5; i++) {
        *(p + i) = new char[50];
    }
    strcpy(*(p + 0), "1. The Vu;Male ");
    strcpy(*(p + 1), "2. Vu The;Female ");
    strcpy(*(p + 2), "3. Vu Nguyen;Male ");
    strcpy(*(p + 3), "4. Nguyen Vu;Male ");
    strcpy(*(p + 4), "5. Vu;Female ");
    for (int i = 0; i < 5; i++) {
        cout << *(p + i) << endl;
        Check(*(p + i));
        if (Check(*(p + i)) == false)
            cnt1++;
        else
            cnt2++;
    }
    cout << "Co " << cnt1 << " sinh vien nam " << endl;
    cout << "Co " << cnt2 << " sinh vien nu ";
    return 0;
}