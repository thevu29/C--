#include <iostream>
#include <fstream>
#include <algorithm>
#include <math.h>
using namespace std;

void readFile(fstream &fin, int a[], int &n)
{
    fin.open("inp1.txt", ios::in);
    if(!fin)  return;

    n = 0;
    while (!fin.eof())
        fin >> a[n++];
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

int Reverse(int n)
{
    int m = 0;
    while (n != 0)
    {
        m = m * 10 + n % 10;
        n /= 10;
    }
    return m;
}

int countPrime(int a[], int n)
{
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (Prime(a[i]))
            cnt++;
    }
    return cnt;
}

int countPalindrome(int a[], int n)
{
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (Prime(a[i]) && Reverse(a[i]) == a[i])
            cnt++;
    }
    return cnt;
}

int GCD(int a, int b)
{
    while (a * b != 0)
    {
        if (a > b)
            a %= b;
        else    
            b %= a;
    }
    return a + b;
}

int countGCD(int a[], int n)
{
    int cnt = 0;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (GCD(a[i], a[j]) == 1)
                cnt++;
        }
    }
    return cnt;
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

int countSymetric(int a[], int n)
{
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (Prime(a[i]) && SymetricPrime(a[i]))
            cnt++;
    }
    return cnt;
}

void deleteSame(int a[], int b[], int n, int &m)
{
    sort(a, a + n);
    for (int i = 0; i < n; i++)     
        b[i] = a[i];

    int j = 0;
    for (int i = 0; i < n; i++)     
    {
        if (a[i] != a[j])
        {
            j++;
            a[j] = a[i];
        }
    }

    m = j + 1;
}

int countSame(int a[], int m)
{
    int cnt = 0;
    for (int i = 0; i < m; i++)
    {
        if (Prime(a[i]))
            cnt++;
    }
    return cnt;
}

int Mersenne(int n)
{
    int i = 1;
    while (true)
    {
        if (pow(2, i) - 1 == n)
            return 1;
        else if (pow(2, i) - 1 > n)
            return 0;
        i++;
    }
}

int countMersenne(int b[], int n)
{
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (Prime(b[i]) && Mersenne(b[i]))
            cnt++;
    }
    return cnt;
}

void writeFile(fstream &fout, int a[], int b[], int n, int m)
{
    fout.open("out1.txt", ios::out);
    if(!fout)   return;

    fout << countPrime(a, n) << " " << countPalindrome(a, n) << endl;
    fout << countGCD(a, n) << endl;
    fout << countSymetric(a, n) << endl;
    deleteSame(a, b, n, m);
    fout << countSame(a, m) << endl;
    fout << countMersenne(b, n);
}

int main()
{
    fstream fin, fout;
    int n, m, a[100], b[50];
    readFile(fin, a, n);
    writeFile(fout, a, b, n, m);
    fin.close();
    fout.close();
    return 0;
}