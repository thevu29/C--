#include <iostream>
using namespace std;

void Nhapmang(int a[], int n)
{
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
}

void Xuatmang(int a[], int n)
{
    cout << "Day so: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
}

int MaxLength(int a[], int n)
{
    int i, j, k;
    int len = 1;
    i = 0;
    while (i < n) {     //1 3 6 7 2 3
        k = 1;
        for (j = i + 1; a[j - 1] < a[j] && j < n; j++) { 
            k++;
        }
        if (len < k) {
            len = k;
            i = j;
        }
        else
            i++;
    }
    return len;
}

int main ()
{
    int n;
    cout << "Nhap so phan tu mang: ";
    cin >> n;
    int a[n];
    Nhapmang(a, n);
    Xuatmang(a, n);
    cout << "\nChieu dai cua day con lien tiep tang dai nhat: " << MaxLength(a, n);
    return 0;
}