#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

void Nhap(int **p, int n)
{
    for (int i = 0; i < n; i++)
    {
        *(p + i) = new int[n];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            *(*(p + i) + j) = rand() % 50 + 1;
        }
    }
}

void Xuat(int **p, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << *(*(p + i) + j) << "\t";
        }
        cout << endl;
    }
}

int main()
{
    srand(time(NULL));
    int n;
    cin >> n;
    int **p = new int *[n];
    Nhap(p, n);
    Xuat(p, n);
    
    cout << "Duong cheo chinh: ";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
                cout << *(*(p + i) + j) << " ";
        }
    }

    cout << "\nDuong cheo phu: ";
    for (int i = 0; i < n; i++)
    {
        for (int j = n - 1; j >= 0; j--)
        {
            if (i == n - 1 - j)
                cout << *(*(p + i) + j) << " ";
        }
    }

    int s = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = n - 1; j >= 0; j--)
        {
            s += *(*(p + i) + j);
        }
    }
    cout << "\nTong = " << s;
    return 0;
}