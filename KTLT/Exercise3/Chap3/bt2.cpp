#include <iostream>
#include <math.h>
#include <fstream>
#include <algorithm>
using namespace std;

void readFile(fstream &fin, int a[], int &n)
{
    fin.open("inp2.txt", ios::in);
    if(!fin)  return;

    n = 0;
    while (!fin.eof())
        fin >> a[n++];
}

int Square(int n)
{
    int sqr = sqrt(n);
    if (sqr * sqr == n)
        return 1;
    return 0;
}

int countSquare(int a[], int n)
{
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (Square(a[i]))
            cnt++;
    }
    return cnt;
}

int Perfect(int n)
{
    int s = 0;
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
            s += i;
    }

    if (s == n)
        return 1;
    return 0;
}

int countPerfect(int a[], int n)
{
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (Perfect(a[i]))
            cnt++;
    }
    return cnt;
}

int Armstrong(int n)
{
    int tmp = n, m = n, cnt = 0, s = 0;
    while(tmp != 0)
    {
        cnt++;
        tmp /= 10;
    }

    while (m != 0)
    {   
        s += pow(m % 10, cnt);
        m /= 10;
    }

    if (s == n)
        return 1;
    return 0;
}

int countArmstrong(int a[], int n)
{
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (Armstrong(a[i]))
            cnt++;
    }
    return cnt;
}

int Prime(int n)
{
    if (n < 2)
        return 0;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

int countPrime(int a[], int n)
{
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (Prime(a[i]))
            cnt++;
    }
    return cnt;
}

int Symetric(int n)
{
    int tmp = n, s = 0;
    while (tmp != 0)
    {
        s = s * 10 + tmp % 10;
        tmp /= 10;
    }

    if (s == n)
        return 1;
    return 0;
}

int countSymetric(int a[], int n)
{
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (Symetric(a[i]))
            cnt++;
    }
    return cnt;
}

int MaxSquare(int a[], int n)
{
    int max = 0;
    for (int i = 0; i < n; i++)
    {
        if (Square(a[i]) && a[i] > max)
            max = a[i];
    }
    return max;
}

int MaxPerfect(int a[], int n)
{
    int max = 0;
    for (int i = 0; i < n; i++)
    {
        if (Perfect(a[i]) && a[i] > max)
            max = a[i];
    }
    return max;
}

int MaxArmstrong(int a[], int n)
{
    int max = 0;
    for (int i = 0; i < n; i++)
    {
        if (Armstrong(a[i]) && a[i] > max)
            max = a[i];
    }
    return max;
}

int MaxPrime(int a[], int n)
{
    int max = 0;
    for (int i = 0; i < n; i++)
    {
        if (Prime(a[i]) && a[i] > max)
            max = a[i];
    }
    return max;
}

int MaxSymetric(int a[], int n)
{
    int max = 0;
    for (int i = 0; i < n; i++)
    {
        if (Symetric(a[i]) && a[i] > max)
            max = a[i];
    }
    return max;
}

struct Max
{
    int cnt, pos;
};

Max AppearMax(int a[], int n)
{
    sort(a, a + n);
    Max max;
    max.cnt = 0;
    int cnt = 1;

    for (int i = 0; i < n; i++)
    {
        if (a[i + 1] == a[i])
            cnt++;
        else
        {
            if (cnt > max.cnt)
            {
                max.pos = i;
                max.cnt = cnt;
            }
            cnt = 1;
        }
    }
    
    return max;
}

int countDiffer(int a[], int n)
{
    int b[100], cnt = 0;

    for (int i = 0; i < n; i++)
        b[i] = a[i];

    for (int i = 0; i < n; i++)
    {
        if (b[i] != b[cnt])
        {
            cnt++;
            b[cnt] = b[i];
        }
    }

    return cnt + 1;
}

int Count(int a[], int n)
{
    int cnt = 0;
    for (int i = 0; i < n - 2; i++)
    {
        for (int j = i + 1; j < n - 1; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                if (pow(a[i], 2) + pow(a[j], 2) == pow(a[k], 2))
                    cnt++;
            }
        }
    }
    return cnt;
}

void writeFile(fstream &fout, int a[], int n)
{
    fout.open("out2.txt", ios::out);
    if(!fout)   return;

    fout << countSquare(a, n) << " " << countPerfect(a, n) << " " << countArmstrong(a, n) << " " << countPrime(a, n) << " " << countSymetric(a, n) << endl;
    fout << MaxSquare(a, n) << " " << MaxPerfect(a, n) << " " << MaxArmstrong(a, n) << " " << MaxPrime(a, n) << " " << MaxSymetric(a, n) << endl;
    fout << a[AppearMax(a, n).pos] << " " << AppearMax(a, n).cnt << endl;
    fout << countDiffer(a, n) << endl;
    fout << Count(a, n);
}

int main()
{
    fstream fin, fout;
    int n, a[100];
    readFile(fin, a, n);
    writeFile(fout, a, n);
    fin.close();
    fout.close();
    return 0;
}