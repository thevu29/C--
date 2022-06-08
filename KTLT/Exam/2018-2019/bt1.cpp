#include <iostream>
using namespace std;

int Cau_a()
{
    int x1, x2, x3, x4, x5, x6, x7;
    x1 = 1;
    x2 = 2 * x1;
    x3 = 3 * (x1 + x2);
    x4 = 4 * (x1 + x2 + x3);
    x5 = 5 * (x1 + x2 + x3 + x4);
    x6 = 6 * (x1 + x2 + x3 + x4 + x5);
    x7 = 7 * (x1 + x2 + x3 + x4 + x5 + x6);
    return x7;
}

int Cau_b(int n)
{
    if (n < 1)  
        return 0;
    if (n == 1) 
        return 1;

    int s = 0;
    for (int i = 1; i < n; i++)    
        s += n * Cau_b(n - i);
    return s;
}

int main ()
{
    int n;
    cin >> n;
    cout << Cau_a() << endl;
    cout << Cau_b(n) << endl;
    return 0;
}