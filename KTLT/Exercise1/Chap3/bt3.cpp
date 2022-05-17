#include <iostream>
#include <fstream>
using namespace std;

void Copy(fstream &fin, fstream &fout)
{
    fin.open("bt3.inp.txt", ios::in);
    if (fin.fail())     return;

    fout.open("bt3.out.txt", ios::out);
    if (fout.fail())    return;

    string ch;
    while (!fin.eof())
    {
        getline(fin, ch);
        fout << ch << "\n";
    }
}

int main()
{
    fstream fin, fout;
    Copy(fin, fout);
    
    fin.close();
    fout.close();
    return 0;
}