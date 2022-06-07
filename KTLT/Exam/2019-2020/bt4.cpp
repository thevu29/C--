#include <iostream>
#include <fstream>
#include <math.h>
#include <algorithm>
using namespace std;

void ReadFile(fstream &fin, int *a, int &n)
{
    fin.open("INPUT.TXT", ios::in);
    if (fin.fail()) return;
    
    fin >> n;
    for (int i = 0; i < n; i++) 
        fin >> a[i];
}   

bool isPrime(int a)
{
    if (a < 2)
        return false;
    for (int i = 2; i <= sqrt(a); i++) {
        if (a % i == 0)
            return false;
    }
    return true;
}

int countPrime(int *a, int n)
{
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        if (isPrime(a[i]))
            cnt++;
    }
    return cnt;
}

void WriteFile(fstream &fout, int *a, int n)
{
    fout.open("OUTPUT.TXT", ios::out);
    if (fout.fail()) return;

    fout << countPrime(a, n) << endl;
    for (int i = 0; i < n; i++) 
        fout << a[i] << " ";
}

int main ()
{
    fstream fin, fout;
    int n, a[100];
    ReadFile(fin, a, n);
    sort(a, a + n);
    WriteFile(fout, a, n);

    fin.close();
    fout.close();
    return 0;
}