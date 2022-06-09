#include <iostream>
#include <fstream>
using namespace std;

void File(fstream &fin, fstream &fout)
{
    int tmp, cnt = 0, cnt1 = 0;
    fin.open("DAYSO.INP.TXT", ios::in);
    fout.open("DAYSO.OUT.txt", ios::out);
    if(fin.fail())  return;
    if(fout.fail())  return;

    fin >> tmp;
    while (!fin.eof()) 
    {
        fin >> tmp;
        if (tmp % 2 == 0)
            cnt++;
        else 
            cnt1++;
    }
    
    fout << cnt << endl;
    fout << cnt1;
}

int main ()
{
    fstream fin, fout;
    File(fin, fout);
    fin.close();
    fout.close();
    return 0;
}