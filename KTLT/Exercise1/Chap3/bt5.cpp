#include <iostream>
#include <fstream>
#include <math.h>
using namespace std;

void ReadFile(fstream &fin, int *&a, int &n)
{
    fin.open("bt5.inp.txt", ios::in);
    if (fin.fail()) return;
    fin >> n;
    a = new int[n];

    if (!a) return;

    for (int i = 0; i < n; i++) fin >> a[i];
}

bool isPrime(int a)
{
    if (a < 2)
        return false;
    for (int i = 2; i <= sqrt(a); i++)
    {
        if (a % i == 0)
            return false;
    }
    return true;
}

int countPrime(int *a, int n)
{
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (isPrime(a[i]))
            cnt++;
    }
    return cnt;
}

void WriteFile(fstream &fout, int *a, int n)
{
    fout.open("bt5.out.txt", ios::out);
    if (fout.fail())     return;

    int cnt = countPrime(a, n);
    fout << cnt << "\n";

    for (int i = 0; i < n; i++)
    {
        if (isPrime(a[i]))
            fout << a[i] << " ";
    }
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