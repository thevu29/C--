#include <iostream>
using namespace std;

void Nhapmang(int a[], int n)
{
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
}

int MaxLength(int a[], int n)
{
    int lmax = 0, dd = 0;
    a[n] = a[n - 1] - 1;
    for (int i = 0; i < n; i ++ ) {
        if (a[i + 1] < a[i] && a[i - 1] < a[i])
            lmax = max(lmax, (i + 1) - dd);
        if (a[i + 1] < a[i]) 
            dd = i + 1;
    }
    return lmax;
}

/*int MaxLength(int a[], int n)
{
    int i, j, k, len;
    int lmax = 1;
    i = 0;
    while (i < n) {
        len = 1;
        for (int j = i + 1; a[j - 1] <= a[j] && j < n; j++)
            len++;
        if (lmax < len) {
            lmax = len;
            i = j;
        }
        else 
            i++;
    }
    return lmax;
}*/

void FindmaxLength(int a[], int n)
{
    int tmp = 0;
    a[n] = a[n - 1] - 1;
    for (int i = 0; i < n; i++) {
        if (a[i - 1] < a[i] && a[i + 1] < a[i]) {
            if ((i + 1) - tmp == MaxLength(a, n)) {
                for (int j = tmp; j <= i; j++ ) 
                    cout << a[j] << " ";
                cout << endl;
            }   
        }
        if (a[i + 1] < a[i])
            tmp = i + 1;
    }
}

int main ()     
{
    int n;      //10 21 149 7 2 6 6 10 6 13 21 3   
    cout << "n = ";
    cin >> n;
    int a[n];
    Nhapmang(a, n);
    cout << "Chieu dai lon nhat = " << MaxLength(a, n) << endl;
    cout << "Cac doan con co chieu dai lon nhat: " << endl;
    FindmaxLength(a, n);
    return 0;
}