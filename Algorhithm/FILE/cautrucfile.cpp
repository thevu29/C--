#include <iostream>
#include <string.h>
#include <fstream>
using namespace std;

struct DSNV
{
    int ma;
    char ten[50];
};

int main ()
{
    DSNV nv[3];
    nv[0].ma = 1;
    strcpy(nv[0].ten, "The Vu");
    nv[1].ma = 2;
    strcpy(nv[1].ten, "Vu The");
    nv[2].ma = 3;
    strcpy(nv[2].ten, "Nguyen Vu");

    ofstream fp("csdl.txt", ofstream::binary);
    if (!fp) {
        cout << "Khong the mo file ";
        return 1;
    }
    fp.write((char *) nv, sizeof(nv));
    fp.close();
    return 0;
}