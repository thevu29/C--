#include <iostream>
#include <math.h>
using namespace std;

void Dxung(int *a, int n)
{
    int cnt = 0, tmp = n - 1;

    for (int i = 0; i < tmp; i++)
    {
        if (a[i] == a[tmp])
            cnt++;
        tmp--;
    }

    if (cnt == n / 2)
        cout << "Mang doi xung " << endl;
    else
        cout << "Mang khong doi xung " << endl;
}

int Max(int *a, int n)
{
    int max = a[0];
    for (int i = 1; i < n; i++)
    {
        if (a[i] > max)
            max = a[i];
    }
    return max;
}

int AppearMax(int *a, int n)
{
    int c[100], pos, max = c[0];

    for (int i = 0; i <= Max(a, n); i++)  c[i] = 0;
    for (int i = 0; i < n; i++) c[a[i]]++;

    for (int i = 1; i <= Max(a, n); i++)
    {
        if (c[i] > max)
        {
            max = c[i];
            pos = i;
        }
    }

    return pos;
}

int Prime(int x)
{
    if (x < 2)
        return 0;
    for (int i = 2; i <= sqrt(x); i++)
    {
        if (x % i == 0)
            return 0;
    }
    return 1;
}

int countPrime(int *a, int n)
{
    int cnt = 0;

    for (int i = 0; i < n; i++)
    {
        if (Prime(a[i]))
            cnt++;
    }

    if (cnt == 0)
        return 0;
    return cnt;
}

int Find(int *a, int n, int x)
{
    if (!countPrime(a, n))  
        return -1;

    int pos, min1, min2 = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (Prime(a[i]) && a[i] != x)
        {
            min1 = abs(a[i] - x);
            if (min1 < min2)
            {
                min2 = min1;
                pos = i;
            }
        }
    }

    return pos;
}

int main()
{
    int n, x, a[100];
    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];
    Dxung(a, n);
    cout << "Xuat hien nhieu nhat: " << AppearMax(a, n) << endl;
    cout << "x = ";
    cin >> x;
    if (Find(a, n, x))
        cout << "Vi tri cua so nguyen to gan " << x << " nhat: " << Find(a, n, x);
    else
        cout << "Mang khong co so nguyen to nao ";
    return 0;
}