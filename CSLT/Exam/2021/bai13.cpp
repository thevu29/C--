#include <iostream>
#include <math.h>
using namespace std;

bool Songuyento(int n)
{
    if (n < 2)
        return false;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}

void Tim(int n)
{
    int cnt = 0;
    for (int i = 2; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            for (int k = j + 1; k <= n; k++) {
                if (Songuyento(i) && Songuyento(j) && Songuyento(k)) {
                    if (pow(i, 2) + pow(j, 2) == k) {
                        cout << i << " " << j << " " << k << endl;     
                        cnt++;
                    }
                }
            }
        }
    }
    if (cnt == 0)
        cout << -1;
}

int main ()
{
    int n;
    cout << "Nhap n: ";
    cin >> n;
    Tim(n);
    return 0;
}