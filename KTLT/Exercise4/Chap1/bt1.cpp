#include <iostream> 
using namespace std;

int S1(int n)
{
    return (n * (n + 1)) / 2;
}

int S2(int n)
{
    int s = 0;
    for (int i = 1; i <= n; i++)
    {
        s += i * i;
    }
    return s;
}

int S3(int n)
{
    int s = 0, tmp = 1;
    for (int i = 1; i <= n; i++)
    {
        tmp *= i;
        s += tmp;
    }
    return s;
}

int P(int n)
{
    int p = 1;
    for (int i = n; i <= 2 * n; i++)
    {
        p *= i;
    }
    return p;
}

int S4(int n)
{
    int s = 0;
    for (int i = 1; i <= n; i++)
    {
        s += P(i);
    }
    return s;
}

int main()
{
    int n;
    cin >> n;
    cout << S1(n) << endl;
    cout << S2(n) << endl;
    cout << S3(n) << endl;
    cout << S4(n);
    return 0;
}