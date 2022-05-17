#include <iostream>
using namespace std;

struct Fraction
{
    int numer, deno;
};

void Input(Fraction a[][100], int n, int m)
{
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j].numer;
            cin >> a[i][j].deno;
        }
    }
}

void Output(Fraction a[][100], int n, int m)
{
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << a[i][j].numer << "/" << a[i][j].deno << "\t";
        }
        cout << endl;
    }
}

Fraction Max(Fraction a[][100], int n, int m)
{
    Fraction max;
    max.numer = a[0][0].numer;
    max.deno = a[0][0].deno;

    for (int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if ((a[i][j].numer * 1.0 / a[i][j].deno) > (max.numer * 1.0 / max.deno))
                max = a[i][j];
        }
    }
    return max;
}

int GCD(int a, int b)
{
    if (a % b == 0)
        return b;
    return GCD(b, a % b);
}

Fraction Sum(Fraction a[][100], int n, int m)
{
    Fraction s;
    s.numer = 0;
    s.deno = 1;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            s.numer = s.numer * a[i][j].deno + s.deno * a[i][j].numer;
            s.deno = s.deno * a[i][j].deno;
        }
    }

    int gcd = GCD(s.numer, s.deno);
    s.numer /= gcd;
    s.deno /= gcd;
    return s;
}

int main ()
{
    int n, m;
    Fraction a[100][100];
    cin >> n >> m;
    Input(a, n, m);
    Output(a, n, m);
    cout << "max = " << Max(a, n, m).numer << "/" << Max(a, n, m).deno << endl;
    cout << "sum = " << Sum(a, n, m).numer << "/" << Sum(a, n, m).deno;
    return 0;
}