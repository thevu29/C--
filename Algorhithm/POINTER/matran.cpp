#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

void Nhap(int **p, int n)
{
    for (int i = 0; i < n; i++) {
        *(p + i) = new int[n];
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            *(*(p + i) + j) = rand() % 50 + 1;
        }
    }
}

void Xuat(int **p, int n)
{
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
           cout << *(*(p + i) + j) << "\t";
        }
        cout << endl;
    }
}

int Max(int **p, int n)
{
    int max = *(*(p + 0) + 0);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (*(*(p + i) + j) > max)
                max = *(*(p + i) + j);
        }
    }
    return max;
}

int main ()
{
    srand(time(NULL));
    int n;
    cin >> n;
    int **p = new int*[n];     
    Nhap(p, n);
    Xuat(p, n);
    cout << "Gia tri lon nhat = " << Max(p, n);
    return 0;
}