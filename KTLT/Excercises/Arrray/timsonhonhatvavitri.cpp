#include <iostream>
using namespace std;

void Nhapdayso(int n, int a[])
{
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
}

int Min(int n, int a[]) 
{
    int min = a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] < min ) {
            min = a[i];
            return i;
        }
    }
    return min;
}

int Position(int n, int a[])
{
    int vitri;
    for (int i = 1; i < n; i++) {
        if (a[i] == Min(n, a)) {
            vitri = i;
        }
    }
    return vitri + 1;
}

int main ()
{
    int n;
    cin >> n;
    int a[n];
    Nhapdayso(n, a);
    cout << "So nho nhat trong day: " << Min(n, a);
    cout << "\nO vi tri thu: " << Position(n, a);;
    return 0;
}