#include <iostream>
using namespace std;

double solve1(double a, int n)
{
   if (n < 0)   return (1.0 / a) * solve1(a, n + 1);
   if (n == 0)  return 1;
   if (a == 0)  return 0;
   return a * solve1(a, n - 1);
}

double solve2(double a, int n) 
{
    double s = 1;
    if (n > 0) {
        while (n > 0) {
            s *= a;
            n--;
        }
    }
    else {
        while (n < 0) {
            s *= 1.0 / a;
            n++;
        }
    }
    return s;
}

int main ()
{
    int n;
    double a;
    cin >> n >> a;
    cout << solve1(a, n) << endl;
    cout << solve2(a, n);
    return 0;
}