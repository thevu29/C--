#include <iostream>
#include <math.h>
using namespace std;

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

int main()
{
    int n;
    cin >> n;
    return 0;
}