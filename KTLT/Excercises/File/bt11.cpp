#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;

void readFile(FILE *f, char str[][100])
{
    f = fopen("bt11.txt", "r");
    if (!f) return;

    char *s;
    int n = 0;
    while (s)
    {
        s = fgets(str[n], 100, f);
        n++;
    }
    for (int i = 0; i < n; i++) cout << str[i];
}

int main()
{
    FILE *f;
    char str[20][100];
    readFile(f, str);
    
    fclose(f);
    return 0;
}