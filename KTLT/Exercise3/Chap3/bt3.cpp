#include <iostream>
#include <fstream>
#include <math.h>
using namespace std;

void readFile(fstream &f, int a[], int &n)
{
    f.open("inp.txt", ios::in);
    if(!f)  return;

    n = 0;
    while (!f.eof())
        f >> a[n++];
}

int Prime(int n)
{
    if (n < 2)
        return 0;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

int SymetricPrime(int n)
{
    int i, j, p, q;

    i = n - 1;
    while (i >= 2)
    {
        if (Prime(i))
        {
            p = i;
            break;
        }
        i--;
    }

    j = n + 1;
    while (true)
    {
        if (Prime(j))
        {
            q = j;
            break;
        }
        j++;
    }

    if (p + q == 2 * n)
        return 1;
    return 0;
}

int Count(int a[], int n)
{
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (Prime(a[i]) && SymetricPrime(a[i]))
            cnt++;
    }
    return cnt;
}

int main()
{
    fstream f;
    int n, a[100];
    readFile(f, a, n);
    cout << Count(a, n);
    f.close();
    return 0;
}