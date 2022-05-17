#include <iostream>
#include <fstream>
#include <math.h>
using namespace std;

void readFile(fstream &fin, int a[][100], int &m, int &n)
{
    fin.open("bt7.inp.txt", ios::in);
    if(fin.fail())  return;

    fin >> m;
    fin >> n;

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
            fin >> a[i][j];
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

int countPrime(int a[][100], int m, int n)
{
    int cnt = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (Prime(a[i][j])) 
                cnt++;
        }
    }
    return cnt;
}

int MaxSum(int a[][100], int m, int n)
{
    int s, ans = 0;

    for (int i = 0; i < m; i++)
    {
        s = 0;
        for (int j = 0; j < n; j++) 
            s += a[i][j];   
        ans = max(ans, s);
    }
    return ans;
}

int MinSum(int a[][100], int m, int n)
{
    int s, ans = INT_MAX;

    for (int j = 0; j < n; j++)
    {
        s = 0;
        for (int i = 0; i < m; i++) 
            s += a[i][j];   
        ans = min(ans, s);
    }
    return ans;
}

void writeFile(fstream &fout, int a[][100], int m, int n)
{
    fout.open("bt7.out.txt", ios::out);
    if(fout.fail()) return;

    fout << countPrime(a, m, n) << endl;
    fout << MaxSum(a, m, n)<< endl;
    fout << MinSum(a, m, n);
}

int main()
{
    fstream fin, fout;
    int m, n, a[100][100];
    readFile(fin, a, m, n);
    writeFile(fout, a, m, n);

    fin.close();
    fout.close();   
    return 0;
}