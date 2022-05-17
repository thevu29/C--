#include <iostream>
#include <fstream>
using namespace std;

void ReadFile(fstream &fin, long &n, long &m)
{
    fin.open("bt16.inp.txt", ios::in);
    if(fin.fail())  return;
    fin >> n;
    fin >> m;
}

void WriteFile(fstream &fout, long n, long m)
{
    fout.open("bt16.out.txt", ios::out);
    if(fout.fail()) return;
    fout << n + m << endl << n - m << endl <<  n * m << endl;
    if (m == 0) 
        fout << "Divide by zero ";
    else    
        fout << n * 1.0 / m;
}

int main ()
{
    fstream fin, fout;
    long n, m;
    ReadFile(fin, n, m);
    WriteFile(fout, n, m);

    fin.close();
    fout.close();
    return 0;
}