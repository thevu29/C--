#include <iostream>
using namespace std;

void Nhapmang(int a[], int n)
{
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
}

int Count(int a[], int n)      // 1 2 3 4 
{
    int cnt = 0;
    a[n] = a[n - 1] - 1;
    for (int i = 1; i < n; i++) {
        if(a[i - 1] < a[i] && a[i + 1] < a[i])
            cnt++;
    }
    return cnt;
}

int main()
{
    int n;
    cout << "Nhap so phan tu mang: ";
    cin >> n;
    int a[n];
    Nhapmang(a, n);
    cout << "\nSo doan con lien tiep tang cua day: " << Count(a, n) << endl;
    return 0;
}