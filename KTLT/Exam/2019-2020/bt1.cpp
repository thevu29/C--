#include <iostream>
using namespace std;

int Cau_a(int n)
{
    if (n == 1) return 1;
    int x = 0;
    for (int i = 2; i <= n; i++) 
       x += Cau_a(i - 1);
    return n + x;
}

int Cau_b(int x[], int n)
{
    int j;
    x[1] = 1;
    for (int i = 2; i <= n; i++) {
        x[i] = i;
        j = i;
        while (j > 1) {
            x[i] = x[i] + x[j - 1];
            j--;
        }
    }
    return x[n];
}

int main ()
{
    int n;
    cin >> n;
    int x[n];
    cout << "x" << n << " = " << Cau_a(n) << endl;
    cout << "x" << n << " kh de quy = " << Cau_b(x, n) << endl;
    return 0;
}

