#include <iostream> 
#include <fstream>
#include <algorithm>
using namespace std;

void ReadFile(fstream &fin, int a[], int &n) 
{
    fin.open("dayso.inp.txt", ios::in);
    if(fin.fail())  return;

    fin >> n;
    for (int i = 0; i < n; i++) 
        fin >> a[i];
}

void SecondMax(fstream &fout, int a[], int n)
{
    fout.open("dayso.out.txt", ios::out);
    if (fout.fail())    return;

    for (int i = n - 2; i >= 0; i--) 
    {
        if (a[i] != a[n - 1]) 
        {
            fout << a[i];
            break;
        }
    }
}

int main ()
{
    fstream fin, fout;
    int n, a[100];
    ReadFile(fin, a, n);
    sort(a, a + n);
    SecondMax(fout, a, n);
    
    fin.close();
    fout.close();
    return 0;
}