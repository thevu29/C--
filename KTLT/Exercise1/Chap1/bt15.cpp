#include <iostream>
#include <math.h>
using namespace std;

int Check(int n)
{
    int m = 0, tmp = n;

    while (tmp != 0)
    {
        m = m * 10 + tmp % 10;
        tmp /= 10;
    }

    if (m == n)
        return 1;
    return 0;
}

int main()
{
    for (int i = 0; i <= 100; i++)
    {
        if (Check(pow(i, 2)))
            cout << i << " ";
    }
    return 0;
}