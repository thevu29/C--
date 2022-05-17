#include <iostream>
using namespace std;

int Sum(int n)
{
    if (n == 0)
        return 0;
    return n + Sum(n - 1);      //ham de quy cong cac so tu 1 toi n
}

int main ()
{
    int n;
    cin >> n;
    cout << Sum(n);
    return 0;
}