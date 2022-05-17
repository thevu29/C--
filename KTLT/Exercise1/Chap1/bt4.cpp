#include <iostream>
#include <algorithm>
using namespace std;

void MatInput(int **a, int n, int m)
{
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++)
            cin >> a[i][j];
    }
}

void MatOutput(int **a, int n, int m)
{
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) 
            cout << a[i][j] << "\t";
        cout << endl;
    }
}

void sortZigzag1(int **a, int n, int m)
{
    int *b, tmp, i;
    b = new int[n * m];
    if (!b) exit(0);
    tmp = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++)
            b[tmp++] = a[i][j];
    }
    sort(b, b + n * m);
    i = m;
    while (i < n * m) {
        sort(b + i, b + i + m, greater<int>());
        i += 2 * m;
    }
    tmp = 0;
    for (int i = 0; i < n; i++) {
       for (int j = 0; j < m; j++) 
           a[i][j] = b[tmp++];
    }
    MatOutput(a, n, m);
    delete []b;
}

void Swap(int &x, int &y)
{
    int tmp = x;
    x = y;
    y = tmp;
}

void sortAsc(int **a, int n, int m)
{
    int b[100];
    int tmp = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            b[tmp++] = a[i][j];
        }
    }
    sort(b, b + n * m);
    tmp = 0;
    for (int i = 0; i < n; i++) {
       for (int j = 0; j < m; j++) {
           a[i][j] = b[tmp++];
       }
    }
    tmp = 0;
    for (int i = 0; i < n; i++) {
       for (int j = 0; j < m; j++) {
           a[i][j] = b[tmp++];
       }
    }
}

void sortZigzag2(int **a, int n, int m)
{
    sortAsc(a, n, m);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (i % 2 == 0) {
                for (int k = j + 1; k < m; k++) {
                    if (a[i][j] > a[i][k])
                        Swap(a[i][j], a[i][k]);
                }
            }
            else {
                for (int k = j + 1; k < m; k++) {
                    if (a[i][j] < a[i][k])
                        Swap(a[i][j], a[i][k]);
                }
            }
        }
    }
    MatOutput(a, n, m);
}

int main ()
{
    int n, m, **a;
    cin >> n >> m;
    a = new int*[n];
    if (!a) return -1;
    for (int i = 0; i < n; i++) {
        a[i] = new int[m];
        if (!a[i])  return -1;;
    }
    MatInput(a, n, m);
    sortZigzag1(a, n, m);
    //sortZigzag2(a, n, m);
    
    for (int i = 0; i < n; i++) {
        delete [] a[i];
    }
    delete []a;
    return 0;
}