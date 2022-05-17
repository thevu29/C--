#include <iostream>
#include <fstream>
#include <algorithm>
#include <math.h>
using namespace std;

void ReadFile(fstream &fin, int a[], int &n)
{
    fin.open("songuyen.inp.txt", ios::in);
    if (fin.fail()) return;

    n = 0;
    while (!fin.eof())
    {
        fin >> a[n];
        n++;
    }
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

int SymetricPrime(int x)
{
    int p, q;
    int i = x - 1, j = x + 1;

    while (i >= 2)
    {
        if (Prime(i))
        {
            p = i;
            break;
        }
        i--;
    }

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
        return 1;
    return 0;
}

void WriteFile(fstream &fout, int a[], int n)
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

    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (Prime(a[i]) && SymetricPrime(a[i]))
            cnt++;
    }
    fout << cnt;
}

int main()
{
    fstream fin, fout;
    int n, a[100];
    ReadFile(fin, a, n);
    sort(a, a + n);
    WriteFile(fout, a, n);

    fin.close();
    fout.close();
    return 0;
}