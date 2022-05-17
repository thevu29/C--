#include <iostream>
#include <string.h>
using namespace std;

int main ()
{
    int a[] = {4, 3, 7, 9, 2, 6};
    int *p = new int;
    p = &a[0];
    cout << *p << endl;
    p = &a[4];
    *p = *p  + 3;
    cout << a[4] << endl;
    p = p - 3;
    cout << *p << endl;
    p = p + 4;
    cout << *p << endl; 

    char *s;
    s = new char[256];
    strcpy(s, "information technology has changed the world ");
    cout << strchr(s, ' ') + 1 << endl;
    s[11] = '\0';
    cout << s << endl;
    cout << strstr(s, "for") << endl;
    cout << s + 27 << endl;
    delete s;
    delete p;
    return 0;
}