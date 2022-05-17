#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    fstream f;
    f.open("bt9.txt", ios::out);
    if (!f) return -1;
    f << "Em oi doi anh ve " << endl;
    f << "Doi anh hoai em nhe " << endl;
    f << "Mua co roi dam de " << endl;
    f << "Ngay co dai le the ";

    f.close();
    return 0;
}
