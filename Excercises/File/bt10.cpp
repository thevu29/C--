#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    fstream f;
    f.open("bt10.txt", ios::in);
    if (!f) return -1;
    
    string tmp;

    while (!f.eof())
    {
        getline(f, tmp);
        cout << tmp << endl;
    }

    f.close();
    return 0;
}
