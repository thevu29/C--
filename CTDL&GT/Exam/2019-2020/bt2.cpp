#include <iostream> 
#include <math.h>
using namespace std;

void Find(int a[], int n)
{
    int pos1 = 0, pos2 = 1, min = abs(a[1] - a[0]);
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (abs(a[j] - a[i]) < min)
            {
                min = abs(a[j] - a[i]);
                pos1 = i;
                pos2 = j;
            }
        }
    }
    cout << a[pos1] << " " << a[pos2];
}

int main()
{
    int n, a[100];
    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];
    Find(a, n);
    return 0;
}