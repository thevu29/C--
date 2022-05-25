#include <iostream>
#include <fstream>
#include <math.h>
#include <algorithm>
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

void deleteSame(int a[], int &n)
{
    sort(a, a + n);
    int j = 0;

    for (int i = 0; i < n; i++)     
    {
        if (a[i] != a[j])
        {
            j++;
            a[j] = a[i];
        }
    }

    n = j + 1;
}

int Count(int a[], int n)
{
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (Prime(a[i]))
            cnt++;
    }
    return cnt;
}

int main()
{
    fstream f;
    int n, a[100];
    readFile(f, a, n);
    deleteSame(a, n);
    cout << Count(a, n);
    f.close();
    return 0;
}