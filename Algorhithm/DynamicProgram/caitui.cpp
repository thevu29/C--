#include <iostream>
using namespace std;

void Input(int w[], int v[], int n)
{
    cout << "Nhap khoi luong tung do vat: ";
    for (int i = 1; i <= n; i++)    
        cin >> w[i];
    cout << "Nhap gia tri tung do vat: ";
    for (int i = 1; i <= n; i++)    
        cin >> v[i];
}

int solve(int w[], int v[], int n, int m)
{
    int value[100][100];                                     //value[i][j]: gia tri lon nhat cua i do vat voi khoi luong toi da j
    for (int i = 0; i <= m; i++) value[0][i] = 0;
    for (int i = 0; i <= n; i++) value[i][0] = 0;  
    for (int i = 1; i <= n; i++) {  
        for (int j = 1; j <= m; j++) {
            if (w[i] > j)
                value[i][j] = value[i - 1][j];
            else 
                value[i][j] = max(value[i - 1][j], value[i - 1][j - w[i]] + v[i]);
        }
    }  
    return value[n][m];
}

int main ()
{
    int n, m, w[100], v[100];
    cout << "Nhap so luong do vat: ";
    cin >> n;
    Input(w, v, n);
    cout << "Nhap khoi luong toi da: ";
    cin >> m;
    cout << solve(w, v, n, m);
   return 0;
}