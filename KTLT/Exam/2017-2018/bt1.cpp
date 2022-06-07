#include <iostream>
using namespace std;

int Cau_a(int n)
{
    if (n <= 3)
        return n;
    return 24 * Cau_a(n - 1) +  25 * Cau_a(n - 2) + 10 * Cau_a(n - 3) + 2018;
}

int Cau_b(int n)
{
    if (n <= 3)
        return n;
        
    int a, a1 = 1, a2 = 2, a3 = 3;
    for (int i = 4; i <= n; i++) 
    {
        a = 24 * a3 + 25 * a2 + 10 * a1 + 2018;
        a1 = a2;
        a2 = a3;
        a3 = a;
    }
    return a;
}

int main ()
{
    int n;
    cin >> n;
    cout << Cau_a(n) << endl;
    cout << Cau_b(n);
    return 0;
}