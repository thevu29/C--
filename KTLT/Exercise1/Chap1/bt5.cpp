#include <iostream>
using namespace std;

void enterMat(int a[][100], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
}

bool Cau_A(int a[][100], int n)
{
    if (n == 1)
        return true;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {                           // 1 2 7
            if (a[i][j] == a[j][i]) // 2 3 5
                return true;        // 7 5 4
        }
        return false;
    }
}

bool Cau_B(int a[][100], int n)
{
    if (n == 1)
        return true;
    int cnt = 0, cnt1 = 0;
    int tmp, ss;

    for (int i = 0; i < n; i++)
    {                // 1 2 1
        tmp = n - 1; // 2 4 2
        for (int j = 0; j < tmp; j++)
        { // 1 2 1
            if (a[i][j] == a[i][tmp])
                cnt++;
            tmp--;
        }
    }

    for (int j = 0; j < n; j++)
    {
        tmp = n - 1;
        for (int i = 0; i < tmp; i++)
        {
            if (a[i][j] == a[tmp][j])
                cnt1++;
            tmp--;
        }
    }

    ss = n * (n / 2);
    if (cnt == ss && cnt1 == ss)
        return true;
    return false;
}

bool Cau_C(int a[][100], int n)          // 1 2 3
{                                        // 2 4 2
    int m = a[(n - 1) / 2][(n - 1) / 2]; // 1 2 2
}

int main()
{
    int n;
    do
    {
        cin >> n;
    } while (n > 100 || n % 2 == 0);
    int a[100][100];
    enterMat(a, n);
    
    if (Cau_A(a, n))
        cout << "Mat doi xung qua duong cheo chinh " << endl;
    else
        cout << "Mat kh doi xung qua duong cheo chinh " << endl;
    if (Cau_B(a, n))
        cout << "Mat doi xung theo dong, cot " << endl;
    else
        cout << "Mat kh doi xung theo dong, cot " << endl;
    return 0;
}