#include <iostream>
using namespace std;

void enterMat(int a[][100], int n)
{
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
}

void Find(int a[][100], int n)
{
    int cnt = 0;
    for (int i = 1; i < n - 1; i++) {
        for (int j = 1; j < n - 1; j++) {
            if (a[i][j] < a[i - 1][j - 1] && a[i][j] < a[i - 1][j] && a[i][j] < a[i - 1][j + 1] && a[i][j] < a[i][j - 1] && a[i][j] < a[i][j + 1] && a[i][j] < a[i + 1][j - 1] && a[i][j] < a[i + 1][j] && a[i][j] < a[i + 1][j + 1]) {
                cout << a[i][j] << " ";
                cnt++;
            }
        }
    }
    if (cnt == 0)
        cout << "Khong co gia tri thoa man ";
}

int main ()
{
    int n;
    do {
        cin >> n;
    } while (n > 100 || n % 2 == 0);
    int a[100][100];
    enterMat(a, n);
    Find(a, n);
    return 0;
}