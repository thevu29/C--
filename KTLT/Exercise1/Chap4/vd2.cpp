#include <iostream>
using namespace std;

int solve_csc(int n, int r, int a)
{
    if (n == 1)
        return a;
    return r + solve_csc(n - 1, r, a);
}

int solve_csn(int n, int q, int a)
{
    if (n == 1)
        return a;
    return q * solve_csn(n - 1, q, a);
}

int main ()
{
    int n, r, q, a;
    cin >> n >> r >> q >> a;
    cout << "csc = " << solve_csc(n, r, a) << endl;
    cout << "csn = " << solve_csn(n, q, a) << endl;
    return 0;
}