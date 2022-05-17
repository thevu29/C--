#include <iostream>
using namespace std;

int S1(int n)
{
    if (n <= 0)
        return 0;
    return n + S1(n - 1);
}

double S2(int n)
{
    if (n <= 0)
        return 0;
    return 1.0 / n + S2(n - 1);
}

long S3(int n)
{
    if (n <= 0)
        return 0;
    return long(n) * (n + 1) + S3(n - 1);
}

int main ()
{
    int n;
    cin >> n;
    cout << "s1 = " << S1(n) << endl;
    cout << "s2 = " << S2(n) << endl;
    cout << "s3 = " << S3(n) << endl;
    return 0;
}