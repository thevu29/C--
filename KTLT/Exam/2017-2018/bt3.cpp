#include <iostream>
#include <fstream>
#include <algorithm>
using namespace std;

void readFile(fstream &fin, int a[], int &n)
{
    fin.open("mang.inp.txt", ios::in);
    if (fin.fail()) return;

    while(!fin.eof())  
    {
        fin >> a[n];
        n++;
    }
}   

void writeFile(fstream &fout, int a[], int n)
{
    fout.open("mang.out.txt", ios::out);
    if (fout.fail())    return;

    sort(a, a + n);
    for (int i = 0; i < n; i++)
        fout << a[i] << " ";
}

int main ()
{
    fstream fin, fout;
    int a[100], n = 0;
    readFile(fin, a, n);
    writeFile(fout, a, n);

    fin.close();
    fout.close();
    return 0;
}