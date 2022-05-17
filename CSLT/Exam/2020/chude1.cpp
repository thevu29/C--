#include <iostream>
#include <math.h>
using namespace std;

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

bool Sohoanchinh(int n)
{
    int s = 0;
    for (int i = 1; i < n; i++) {
        if (n % i == 0)
            s += i;
    }
    if (s == n)
        return true;
    return false;
}

void Cau1_2(int n)
{
    int cnt1 = 0, cnt2 = 0;
    for (int i = 1; i <= n; i++) {
        if (Songuyento(i))
            cnt1++;
        if (Sohoanchinh(i))
            cnt2++;
    }
    cout << "Ket qua bai 1: ";
    cout << cnt1 << endl;
    cout << "Ket qua bai 2: ";
    cout << cnt2 << endl;
}

int Cau3(int n)
{
    int s = 0;
    for (int i = 1; i <= n; i++) {
        int tmp = i;
        while (tmp > 0) {
            int a = tmp % 10;
            s += a;
            tmp /= 10;
        }
    }
    return s;
}

bool Sochinhphuong(int n)
{
    if (sqrt(n) == (int) sqrt(n))
        return true;
    return false;
}

int Cau4(int n)
{
    int tmp1, i = n;
    while (true) {
        if (Sochinhphuong(i)) {
            tmp1 = i;
            break;
        }
        i++;
    }
    return tmp1;
}

int Cau5(int n)
{
    int tmp2;
    for(int i = n; i > 0; i--) {
        if (Sohoanchinh(i)) {
            tmp2 = i;
            break;
        }
    }
    return tmp2;
}

int Songuyentotrc(int n)
{
    int a;
    for (int i = n - 1; i > 1; i--) {
        if (Songuyento(i)) {
            a = i;
            break;
        }
    }
    return a;
}

int Songuyentosau(int n)
{
    int b;
    int i = n;
    while (true) {
        i++;
        if (Songuyento(i)) {
            b = i;
            break;
        }
    }
    return b;
}

int main ()
{
    int n;
    cout << "Nhap n: ";
    cin >> n;
    Cau1_2(n);
    cout << "Ket qua bai 3: " << Cau3(n) << endl;
    cout << "Ket qua bai 4: " << Cau4(n) << endl;
    cout << "Ket qua bai 5: " << Cau5(n) << endl;
    cout << "Ket qua bai 6: " << Songuyentotrc(n) << " va " << Songuyentosau(n);
    return 0;
}