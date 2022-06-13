#include <iostream>
#include <fstream>
#include <math.h>
#include <algorithm>
using namespace std;

void readFile(fstream &fin, int *a, int &n)
{
    fin.open("INPUT.TXT", ios::in);
    if (fin.fail()) return;
    
    fin >> n;
    for (int i = 0; i < n; i++) 
        fin >> a[i];
}   

int Prime(int x)
{
    if (x < 2)
        return 0;
    for (int i = 2; i <= sqrt(x); i++) {
        if (x % i == 0)
            return 0;
    }
    return 1;
}

int countPrime(int *a, int n)
{
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        if (Prime(a[i]))
            cnt++;
    }
    return cnt;
}

void writeFile(fstream &fout, int *a, int n)
{
    fout.open("OUTPUT.TXT", ios::out);
    if (fout.fail()) return;

    fout << countPrime(a, n) << endl;
    sort(a, a + n);
    for (int i = 0; i < n; i++) 
        fout << a[i] << " ";
}

int main ()
{
    fstream fin, fout;
    int n, a[100];
    readFile(fin, a, n);
    writeFile(fout, a, n);
    fin.close();
    fout.close();
    return 0;
}