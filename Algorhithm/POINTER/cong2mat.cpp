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

void Sum(int **p1, int **p2 ,int n)
{
    int **p3 = new int*[n];
    for (int i = 0; i < n; i++) {
        *(p3 + i) = new int[n];
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            *(*(p3 + i) + j) = *(*(p1 + i) + j) + *(*(p2 + i) + j);
        }
    }
    Xuat(p3, n);
}

int main ()
{
    srand(time(NULL));
    int n;
    cin >> n;
    int **p1 = new int*[n];   
    int **p2 = new int*[n];   
    Nhap(p1, n);
    Nhap(p2, n);
    cout << "Ma tran A: " << endl;
    Xuat(p1, n);
    cout << "\nMa tran B: " << endl;
    Xuat(p2, n);
    cout << "\nTong 2 ma tran: " << endl;
    Sum(p1, p2, n);
    return 0;
}