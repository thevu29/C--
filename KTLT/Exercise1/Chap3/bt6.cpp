#include <iostream>
#include <fstream>
#include <algorithm>
using namespace std;

void ReadFile(fstream &fin, int *&a, int &n)
{
    fin.open("bt6.inp.txt", ios::in);
    if (fin.fail()) return;

    fin >> n;

    a = new int[n];
    if (!a) return;

    for (int i = 0; i < n; i++)
        fin >> a[i];
}

int findMax(int *a, int n)
{
    int max = a[0];
    for (int i = 1; i < n; i++)
    {
        if (a[i] > max)
            max = a[i];
    }
    return max;
}

int countEven(int *a, int n)
{
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
            cnt++;
    }
    return cnt;
}

void WriteFile(fstream &fout, int *a, int n)
{
    fout.open("bt6.out.txt", ios::out);
    if (fout.fail()) return;

    sort(a, a + n);
    fout << "Cau a: " << findMax(a, n) << endl;
    fout << "Cau b: " << countEven(a, n) << " " << n - countEven(a, n) << endl;
    fout << "Cau c: " << endl;
    
    for (int i = 0; i < n; i++)
    {
        fout << a[i] << " ";
        if ((i + 1) % 10 == 0)
            fout << endl;
    }
}

int main()
{
    fstream fin, fout;
    int n, *a;
    ReadFile(fin, a, n);
    WriteFile(fout, a, n);
    
    delete[] a;
    fin.close();
    fout.close();
    return 0;
}