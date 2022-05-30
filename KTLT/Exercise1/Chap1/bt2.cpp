#include <iostream>
using namespace std;

void findMaxLength(int *a, int n, int &begin, int &end)
{
    int j;
    begin = 0, end = 0;

    for (int i = 0; i < n; i++)
    {
        j = i;

        while (j < n - 1)
        {
            if (a[j] < a[j + 1])
                j++;
            else
                break;
        }

        if (j - i > end - begin)
        {
            begin = i;
            end = j;
        }

        i = j;
    }

    cout << begin << " " << end - begin + 1;
}

void findMaxSum(int *a, int n)
{
    int begin, end, j, s;
    int smax = 0;
    findMaxLength(a, n, begin, end);

    for (int i = begin; i < n - 1; i++)
    {
        s = 0;
        j = i;

        while (j < n - 1)
        {
            s += a[j];
            if (a[j] < a[j + 1])
                j++;
            else
                break;
        }

        if (j - i == end - begin /*&& i != begin && j != end*/)
        {
            cout << i << " " << j - i + 1 << endl;
            if (smax < s)
                smax = s;
        }

        i = j;
    }

    cout << smax;
}

int main()
{
    int n, begin, end, *a;
    cin >> n;
    a = new int[n];
    if (!a) return -1;
    for (int i = 0; i < n; i++) cin >> a[i];
    findMaxLength(a, n, begin, end);
    delete[] a;
    return 0;
}