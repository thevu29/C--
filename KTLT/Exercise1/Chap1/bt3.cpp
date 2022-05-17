#include <iostream>
using namespace std;

int Check(int *a, int n)
{
    n--;
    int flag;

    for (int i = 0; i < n; i++)
    { 
        if (a[i] == a[n--])
            flag = 1;
        else
            flag = 0;
    }

    if (flag)
        return 1;
    return 0;
}

int main()
{
    int n, a[100];
    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];

    if (Check(a, n))
        cout << "Day doi xung ";
    else
        cout << "Day kh doi xung ";
    return 0;
}