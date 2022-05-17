#include <iostream>
#include <fstream>
using namespace std;

void DocFile(fstream &fin, int *&a, int &n)
{
    fin.open("bt7.inp.txt", ios::in);
    if(fin.fail()) return;
    fin >> n;
    a = new int[n];
    if(!a)  return;
    for (int i = 0; i < n; i++)
        fin >> a[i];
}

void MaxSum(fstream &fout, int *a, int n)
{
    fout.open("bt7.out.txt", ios::out);
    if(!fout)   return;
    int smax = INT_MIN, s = 0;
    int begin = 0, end = 0, j = 0;
    for (int i = 0; i < n; i++) {
        if (s + a[i] < a[i]) {
            j = i;
            s = a[i];
        }
        else 
            s += a[i];
        if (smax < s) {
            begin = j + 1;
            end = i + 1;
            smax = s;
        }
    }
    fout << smax << " " << begin << " " << end;
}

int main ()
{
    fstream fin, fout;
    int n, *a;
    DocFile(fin, a, n);
    MaxSum(fout, a, n);
    delete []a;
    fin.close();
    fout.close();
    return 0;
}