#include <iostream>
#include <fstream>
#include <algorithm>
using namespace std;

void readFile(fstream &fin, int a[], int &n, int &m)
{
    fin.open("bt2.inp.txt", ios::in);
    if (fin.fail()) return;

    fin >> n;
    fin >> m;
    for (int i = 0; i < n; i++) fin >> a[i];
}

int Max(int a[], int n)
{
    int maxx = a[0];
    for (int i = 1; i < n; i++) maxx = max(maxx, a[i]);
    return maxx;
}

int Count(int a[], int n, int m)
{
    int cnt = 0;
    bool flag[100];

    for (int i = 0; i < n; i++) flag[a[i]] = true;

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] + a[j] == m && flag[a[i]] && flag[a[j]])
            {
                cnt++;
                flag[a[i]] = false;
                flag[a[j]] = false;
            }
        }
    }

    return cnt;
}

int Median(int a[], int n)
{
    sort(a, a + n);
    return a[n / 2];
}

void writeFile(fstream &fout, int a[], int n, int m)
{
    fout.open("bt2.out.txt", ios::out);
    if (fout.fail())    return;

    fout << Max(a, n) << endl;
    fout << Count(a, n, m) << endl;
    fout << Median(a, n);
}

int main()
{
    fstream fin, fout;
    int n, m, a[100];
    readFile(fin, a, n, m);
    writeFile(fout, a, n, m);

    fin.close();    
    fout.close();
    return 0;
}

