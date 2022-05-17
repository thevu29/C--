#include <iostream>
#include <stdio.h>
#include <fstream>
using namespace std;

int main ()
{
    FILE *fp = fopen("csdl.txt", "w");
    //ofstream fp("csdl.txt");
    if (!fp) {
        cout << "Khong the mo file ";
        return 1;
    }
    fputs("Nguyen The Vu\n", fp);
    for (int i = 0; i <= 100; i++) {
        if (i % 2 == 0)
            fprintf(fp, "%d ", i);
    }
    fclose(fp); 
    //fp.close();
    return 0;
}