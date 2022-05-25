#include <iostream>
#include <string.h>
using namespace std;

int main ()
{
    int a[] = {4, 3, 7, 9, 2, 6};
    int *p = new int;
    p = &a[0];
    cout << *p << endl;     // 4
    p = &a[4]; 
    *p = *p  + 3;
    cout << a[4] << endl;       // 5
    p = p - 3;
    cout << *p << endl;     // 3
    p = p + 4;
    cout << *p << endl; // 6

    char *s;
    s = new char[256];
    strcpy(s, "information technology has changed the world ");
    cout << strchr(s, ' ') + 1 << endl;     // technology has changed the world
    s[11] = '\0';    
    cout << s << endl;      // information
    cout << strstr(s, "for") << endl;       // formation
    cout << s + 27 << endl;             // changed the world
    delete s;
    delete p;
    return 0;
}