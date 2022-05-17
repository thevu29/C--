#include <iostream>
#include <fstream>
using namespace std;

int main ()
{
    fstream fp;
    fp.open("bt1.out.txt", ios::out);
    if (fp.fail()) return -1;

    for (int i = 0; i <= 100; i += 2)   fp << i << " ";
    
    fp.close();
    return 0;
}