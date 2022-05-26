#include <iostream>
#include <fstream>
#include <math.h>
using namespace std;

void readFile(fstream &fin, int a[][100], int &m, int &n)
{
    fin.open("bt8.inp.txt", ios::in);
    if(fin.fail())  return;

    fin >> m;
    fin >> n;

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
            fin >> a[i][j];
    }
}

int Max(int a[][100], int m, int n)
{
    int maxx = a[0][0];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
            maxx = max(maxx, a[i][j]);
    }
    return maxx;
}

int countMax(int a[][100], int m, int n)
{
    int cnt = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i][j] == Max(a, m, n))
                cnt++;
        }
    }
    return cnt;
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

int MaxPrimeSum(int a[][100], int m, int n)
{
    int s, ans = INT_MIN;
    for (int i = 0; i < m - 1; i++)
    {
        for (int j = 0; j < n - 1; j++) 
        {
            s = 0;
            if (Prime(a[i][j]) && Prime(a[i][j + 1]) && Prime(a[i + 1][j]) && Prime(a[i + 1][j + 1]))
            {
                s = a[i][j] + a[i][j + 1] + a[i + 1][j] + a[i + 1][j + 1];
                ans = max(ans, s);
            }
        }
    }
    return ans;
}

void writeFile(fstream &fout, int a[][100], int m, int n)
{
    fout.open("bt8.out.txt", ios::out);
    if(fout.fail())   return;

    fout << Max(a, m, n) << " " << countMax(a, m, n) << endl;
    
    int s;
    for (int j = 0; j < n; j++) 
    {
        s = 0;
        for (int i = 0; i < m; i++) s += a[i][j];
        fout << s << " ";
    }

    fout << "\n" << MaxPrimeSum(a, m, n);
}

int main()
{
    int m, n, a[100][100];
    fstream fin, fout;
    readFile(fin, a, m, n);
    writeFile(fout, a, m, n);
    
    fin.close();
    fout.close();
    return 0;
}