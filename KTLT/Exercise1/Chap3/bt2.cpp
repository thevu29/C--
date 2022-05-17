#include <iostream>
#include <fstream>
using namespace std;

void ReadFile(fstream &fin, int *&a, int &n)
{
    fin.open("bt2.inp.txt", ios::in);
    if (fin.fail()) return;

    fin >> n;

    a = new int[n];
    if (!a) return;

    for (int i = 0; i < n; i++)
        fin >> a[i];
}

int Sum(int *a, int n)
{
    int s = 0;
    for (int i = 0; i < n; i++)
        s += a[i];
    return s;
}

void WriteFile(fstream &fout, int *a, int n)
{
    fout.open("bt2.out.txt", ios::out);
    if (fout.fail())    return;
    fout << Sum(a, n);
}

int main()
{
    fstream fin, fout;
    int n, *a;
    ReadFile(fin, a, n);
    WriteFile(fout, a, n);
    
    delete[] a;
    fin.close();
    fout.close();
    return 0;
}