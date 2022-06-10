#include <iostream>
#include <fstream>
#include <algorithm>
#include <math.h>
using namespace std;

void readFile(fstream &fin, int a[], int &n)
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

int Prime(int x)
{
    if (x < 2)
        return 0;
    for (int i = 2; i <= sqrt(x); i++)
    {
        if (x % i == 0)
            return 0;
    }
    return 1;
}

int P(int x)
{
    int i = x - 1;
    while (i >= 2)
    {
        if (Prime(i))
            return i;
        i--;
    }
    return -1;
}

int Q(int x)
{
    int j = x + 1;
    while (true)
    {
        if (Prime(j))
            return j;
        j++;
    }
    return -1;
}

int Count(int a[], int n)
{
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (Prime(a[i]) && P(a[i]) + Q(a[i]) == 2 * a[i])
            cnt++;
    }
    return cnt;
}

void MaxSecond(fstream &fout, int a[], int n)
{
    sort(a, a + n);
    fout << a[n - 1] << " ";
    for (int i = n - 2; i >= 0; i--)
    {
        if (a[i] != a[n - 1])
        {
            fout << a[i] << endl;
            break;
        }
    }
}

void writeFile(fstream &fout, int a[], int n)
{
    fout.open("ketqua.out.txt", ios::out);
    if (fout.fail())    return;

    MaxSecond(fout, a, n);
    fout << Count(a, n);
}

int main()
{
    fstream fin, fout;
    int n, a[100];
    readFile(fin, a, n);
    writeFile(fout, a, n);

    fin.close();
    fout.close();
    return 0;
}