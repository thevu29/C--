#include <iostream>
#include <fstream>
#include <algorithm>
#include <math.h>
using namespace std;

void ReadFile(fstream &fin, int *&a, int &n) 
{
    fin.open("songuyen.inp.txt", ios::in);
    if (fin.fail()) return;

    fin >> n;

    a = new int[n];
    if(!a)  return;

    for (int i = 0; i < n; i++) fin >> a[i];
}

bool Prime(int x)
{
    if (x < 2)
        return false;
    for (int i = 2; i <= sqrt(x); i++) 
    {
        if (x % i == 0)
            return false;
    }
    return true;
}

bool SymmetricPrime(int x)
{
    int p, q, i, j;

    i = x - 1;
    while (i >= 2)
    {
        if (Prime(i)) 
        {
            p = i;
            break;
        }
        i--;
    }

    j = x + 1;
    while (true) 
    {
        if (Prime(j)) 
        {
            q = j;
            break;
        }
        j++;
    }

    if (p + q == 2 * x)
        return true;
    return false;
}

int Count(int *a, int n)
{
    int cnt = 0;
    for (int i = 0; i < n; i++) 
    {
        if (Prime(a[i]) && SymmetricPrime(a[i]))
            cnt++;
    }
    return cnt;
}

void WriteFile(fstream &fout, int *a, int n)
{
    fout.open("ketqua.out.txt", ios::out);
    if (fout.fail())    return;

    fout << a[n - 1] << " ";

    for (int i = n - 2; i >= 0; i--) 
    {
        if (a[i] != a[n - 1]) 
        {
            fout << a[i] << endl;
            break;
        }
    }
    
    fout << Count(a, n);
}

int main ()
{
    fstream fin, fout;
    int n, *a;
    ReadFile(fin, a, n);
    sort(a, a + n);
    WriteFile(fout, a, n);

    delete []a;
    fin.close();
    fout.close();
    return 0;
}