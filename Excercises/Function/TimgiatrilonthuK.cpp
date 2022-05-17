#include <iostream>
using namespace std;

void Nhapmang(int a[], int n)
{
	for (int i = 0; i < n; i++) {
		//a[i] = rand () % 100 + 1;
        cin >> a[i];
	}
}

void Xuatmang(int a[], int n)
{
	cout << "Mang: ";
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
}

void Sort(int a[], int n)
{
    for (int i = 1; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] < a[j]) {
                int tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }
}

bool Tim_solonthu_k(int a[], int n, int k, int& x)
{
    int k1 = 1;
    Sort(a, n);
    int tmp = a[0];
    if (k <= 0 || k > n) 
		return false;
    for (int i = 1; i < n; i++) {
        if (a[i] < tmp) {
            tmp = a[i];
            k1++;
        }
        if (k == k1) {
            x = tmp;
            return true;
        }
    }
    return false;
}

int main ()
{
	int n, x, k;
	cout << "Nhap n: ";
	cin >> n;
	int a[n];
	Nhapmang(a, n);
	Xuatmang(a, n);
	cout << "\nTim so lon thu: ";
	cin >> k;	
	int tk = Tim_solonthu_k(a, n, k, x);
    if (tk) {
        cout << "So lon thu " << k << " la: " << x;
    }
    else {
        cout << "So lon thu " << k << " khong ton tai ";
    }
	return 0;
}