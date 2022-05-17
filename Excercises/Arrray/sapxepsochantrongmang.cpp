#include <iostream>
using namespace std;

int main ()
{
    int n;
    cout << "Nhap so phan tu cua mang: ";
    cin >> n;
    int a[n];
    int i = 0;
    while (i < n) {
        cout << "a[" << i + 1 << "] = ";
        cin >> a[i];
        if (a[i] < 0) {
            continue;
        }
        i++;
    }
    
    cout << "\nMang sau khi nhap: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }

    cout << "\nSo nguyen to trong mang: ";
    for (int i = 0; i < n; i++) {
        int flag = 1;
        for (int j = 2; j <= a[i]/2; j++) {
            if(a[i] % j == 0) {
                flag = 0;
                break;
            }
        }
        if (a[i] >= 2 && flag == 1) {
            cout << a[i] << " ";
        }
    }
    cout << "\nCac so chan trong mang: ";
    for (int i = 0; i < n; i++) {
        if (a[i] % 2 == 0) {
            cout << a[i] << " ";
        }
    }

    cout << "\nCac so chan theo thu tu tang dan: ";
    for (int i = 0; i < (n - 1); i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] % 2 == 0 && a[j] % 2 == 0) {
                if(a[i] > a[j]) { 
                    int tam = a[i];
                    a[i] = a[j];
                    a[j] = tam;
                }
                cout << a[i] << " ";
            }
        }
    }
    return 0;
}
