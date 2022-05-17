#include <iostream>
#include <math.h>
using namespace std;

void Nhapmang(int a[], int n)
{
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
}

int Cau_9(int a[], int n)
{
    int max = a[0];
    for (int i = 0; i < n; i++) {
        if (a[i] > max)
            max = a[i];
    }
    return max;
}

int Cau_10(int a[], int n)
{
    int s = 0;
    for (int i = 0; i < n; i++) {
        int tmp = a[i];
        while (tmp > 0) {
            int b = tmp % 10;
            s += b;
            tmp /= 10;
        }
    }
    return s;
}

bool Songuyento(int n)
{
    if (n < 2)
        return false;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}

bool SonguyentoDaonguoc(int n)
{
    int s1 = 0;
    if (Songuyento(n)) {
        while (n > 0) {
            s1 = s1 * 10 + n % 10;
            n /= 10; 
        }
    }
    if (Songuyento(s1))
        return true;
    return false;
}

void Cau_11(int a[], int n)
{
    for (int i = 0; i < n ; i++) {
        if (SonguyentoDaonguoc(a[i]))
            cout << a[i] << " ";
    }
    cout << endl;
}

int UCLN(int m, int n)
{
	if (m % n == 0)
		return n;
	return UCLN(n, m % n);
}

int Cau_12(int a[], int n)
{
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            int uc;
            uc = UCLN(a[i], a[j]);
            if (uc == 1)
                cnt++;
        }
    }
    return cnt;
}

int MaxLength(int a[], int n)
{
    int lmax = 0, tmp = 0;
    for (int i = 0; i < n; i++) {
        if (a[i - 1] < a[i] && a[i + 1] < a[i]) {
            lmax = max(lmax, (i + 1) - tmp);                //5 3 4 5 6 1
        }
        if (a[i + 1] < a[i])
            tmp = i + 1;
    }
    return lmax;
}

void Cau_13(int a[], int n)     
{
    int tmp = 0;
    for (int i = 0; i < n; i++) {
        if (a[i - 1] < a[i] && a[i + 1] < a[i]) {
            if ((i + 1) - tmp == MaxLength(a, n)) {
                for (int j = tmp; j <= i; j++)
                    cout << a[j] << " ";
            }
        }
        if (a[i + 1] < a[i])
            tmp = i + 1;
    }
}

int dxungtrc(int m)
{
    int trc;
    for (int i = m - 1; i >= 2; i--) {
        if (Songuyento(i)) {
            trc = i;
            break;
        }
    }
    return trc;
}

int dxungsau(int m)
{
    int sau;
    while (true) {
        m++;
        if (Songuyento(m)) {
            sau = m;
            break;
        }
    }
    return sau;
}

int Cau_14(int a[], int n)
{
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        if (Songuyento(a[i])) {
            double tbc = (dxungtrc(a[i]) + dxungsau(a[i])) / 2.0;
            if (tbc == a[i])
                cnt++;
        }
    }
    return cnt;
}

void Swap(int& c, int& d)
{
    int tmp = c;
    c = d;
    d = tmp;
}

void Cau_15(int a[], int n)
{
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] > a[j]) 
                Swap(a[i], a[j]);
        }
    }
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
}

int main ()     
{
    int n;      //10 21 149 7 2 6 6 10 6 13 21 3   
    do {
        cout << "n = ";
        cin >> n;
    }
    while (n <= 0 && n > 30000);
    int a[n];
    Nhapmang(a, n);
    a[n] = a[n - 1] - 1;
    cout << "Ket qua bai 9: "<< Cau_9(a, n) << endl;
    cout << "Ket qua bai 10: " << Cau_10(a, n) << endl;
    cout << "Ket qua bai 11: ";
    Cau_11(a, n);
    cout << "Ket qua bai 12: " << Cau_12(a, n) << endl;
    cout << "Ket qua bai 13: ";
    Cau_13(a, n);
    cout << "\nKet qua bai 14: "<< Cau_14(a, n) << endl;
    cout << "Ket qua bai 15: ";
    Cau_15(a, n);
    return 0;
}