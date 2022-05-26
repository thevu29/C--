#include <iostream>
#include <string.h>
using namespace std;

void Swap(char* s1, char* s2)
{
    char* tmp = s1;
    s1 = s2;
    s2 = tmp;
}

char *Tachten(char *s, int n)
{
    char str[10];
    int mark = 0, j = 0;
    for (int i = strlen(s) - 1; i >= 0; i--) {
        if (s[i] == ' ') {
            mark = i + 1;
            break;
        }
    }
    for (int i = mark; i < strlen(s); i++) {
        str[j++] = s[i];
    } 
    return str;
}

int main ()
{
    int n;
    cin >> n;
    char **s = new char*[n];
    for (int i = 0; i < n; i++) {
        s[i] = new char[100];
        cout << "Nguoi thu " << i + 1 << ": ";
        fflush(stdin);
        gets(s[i]);
    }
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j > n; j++) {
            if(strcmp(Tachten(s[i], n), Tachten(s[j], n)) > 0)
                Swap(Tachten(s[i], n), Tachten(s[j], n));
        }
    }
    return 0;
}