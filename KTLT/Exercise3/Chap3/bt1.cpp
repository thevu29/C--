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

int main()
{
    fstream f;
    int n, a[100];
    readFile(f, a, n);
    cout << countPrime(a, n) << " " << countPalindrome(a, n);
    f.close();
    return 0;
}