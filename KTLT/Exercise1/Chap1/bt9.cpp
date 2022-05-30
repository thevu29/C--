#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

int Count(int x)
{
    int cnt = 0;
    while (x > 0)
    {
        x /= 10;
        cnt++;
    }
    return cnt;
}

void SaveToArr(int A, int B, int a[], int b[])
{
    int n = Count(A), m = Count(B);
    for (int i = n - 1; i >= 0; i--)
    {
        a[i] = A % 10;
        A /= 10;
    }
    for (int i = m - 1; i >= 0; i--)
    {
        b[i] = B % 10;
        B /= 10;
    }
}

void CreatMaxNumber(int A, int B, int a[], int b[], int c[])
{
    int i = 0, j = 0, k = 0;
    int n = Count(A) + Count(B);
    while (i != Count(A) && j != Count(B))
    {
        if (a[i] == b[j])
        {
            if (a[i + 1] > b[j + 1])
            {
                c[k++] = a[i];
                i++;
            }
            else if (a[i + 1] < b[j + 1])
            {
                c[k++] = b[j];
                j++;
            }
        }
        /*while (a[i] == b[j]) {
            if (a[i + 1] == b[j + 1]) {
                i++;
                j++;
            }
            else {
                i++;
                j++;
                break;
            }
        }*/
        if (a[i] > b[j])
        {
            c[k++] = a[i];
            i++;
        }
        else
        {
            c[k++] = b[j];
            j++;
        }
    }
    for (int tmp = k; tmp < n; tmp++)
    {
        if (i == Count(A))
            c[tmp] = b[j++];
        else if (j == Count(B))
            c[tmp] = a[i++];
    }
    for (int i = 0; i < n; i++)
    {
        cout << c[i];
    }
}

int main()
{
    srand(time(NULL));
    int A, B;
    cout << "A = "; // 11823 28115
    cin >> A;
    cout << "B = ";
    cin >> B;
    /*A = rand() % 50000 + 1;
    B = rand() % 50000 + 1;
    cout << "A = " << A << endl;
    cout << "B = " << B << endl;*/
    int a[100], b[100], c[100];
    SaveToArr(A, B, a, b);
    CreatMaxNumber(A, B, a, b, c);
    return 0;
}