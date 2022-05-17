#include <iostream>
#include <algorithm>
using namespace std;

void readFile(FILE *&fin, int a[], int &n)
{
    fin = fopen("inp.txt", "r");
    if (!fin)   return;

    
}

void writeFile(FILE *&fout, int a[], int n)
{
    fout = fopen("out.txt", "w");
    if(!fout)   return;

    sort(a, a + n);
    for (int i = 0; i < n; i++)
        fprintf(fout, "%d ", a[i]);
}

int main()
{
    FILE *fin, *fout;
    int n, a[100];
    readFile(fin, a, n);
    writeFile(fout, a, n);

    fclose(fin);
    fclose(fout);
    return 0;
}