#include <iostream>
#include <algorithm>
using namespace std;

void readfFile(FILE *fin, int a[], int &n)
{
    fin = fopen("inp.txt", "r");
    if(!fin)   return;

    int tmp;
    n = 0;
    while (fscanf(fin, "%d", &tmp) != NULL)
        n++;
}

int main ()
{
    FILE *fin;
    int n, a[100];
    readfFile(fin, a, n);
    cout << n;

    fclose(fin);
    return 0;
}