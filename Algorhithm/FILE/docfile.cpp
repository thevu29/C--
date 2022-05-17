#include <iostream>
#include <stdio.h>
using namespace std;

void readFile(FILE *fp, char *str)
{
    fp = fopen("csdl.txt", "r");
    if (!fp) {
        cout << "Khong the mo file ";
        return;
    }
    while(fgets(str, 100, fp) != NULL) 
    {
        cout << str;
    }
}

int main ()
{
    FILE *fp;
    char str[100];
    readFile(fp, str);

    fclose(fp);
    return 0;
}