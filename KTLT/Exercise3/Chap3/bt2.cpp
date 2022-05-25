#include <iostream>
#include <fstream>
using namespace std;

void readFile(fstream &f, int a[], int &n)
{
    f.open("inp.txt", ios::in);
    if(!f)  return;

    n = 0;
    while (!f.eof())
        f >> a[n++];
}

int GCD(int a, int b)
{
    while (a * b != 0)
    {
        if (a > b)
            a %= b;
        else    
            b %= a;
    }

    return a + b;
}

int Count(int a[], int n)
{
    int cnt = 0;

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (GCD(a[i], a[j]) == 1)
                cnt++;
        }
    }

    return cnt;
}

int main()
{
    fstream f;
    int n, a[100];
    readFile(f, a, n);
    cout << Count(a, n);
    f.close();
    return 0;
}