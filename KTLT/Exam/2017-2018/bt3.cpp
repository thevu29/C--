#include <iostream>
#include <fstream>
#include <algorithm>
using namespace std;

void DocFile(fstream &fin, int *&a, int &n)
{
    fin.open("mang.inp.txt", ios::in);
    if (fin.fail()) {
        cout << "Can't open inp file ";
        return;
    }
    n = 0;
    int tmp;  
    while(!fin.eof())  {
        fin >> tmp;
        n++;
    }
    a = new int[n];
    if(!a)  return;
    fin.seekg(0, ios_base::beg);
    for (int i = 0; i < n; i++) 
        fin >> a[i];
}   

void GhiFile(fstream &fout, int *a, int n)
{
    fout.open("mang.out.txt", ios::out);
    if (fout.fail()) {
        cout << "Can't open out file ";
        return;
    }
    sort(a, a + n);
    for (int i = 0; i < n; i++)
        fout << a[i] << " ";
}

int main ()
{
    fstream fin, fout;
    int n, *a;
    DocFile(fin, a, n);
    GhiFile(fout, a, n);
    delete []a;
    fin.close();
    fout.close();
    return 0;
}