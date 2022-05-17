#include <iostream>
#include <string.h>
using namespace std;

void Input(char x[], char y[])
{
    cout << "Nhap xau x: ";
    cin.getline(x, 100);
    cout << "Nhap xau y: ";
    cin.getline(y, 100);
}

int LCS_length(char x[], char y[], int L[][100])
{
    int n = strlen(x), m = strlen(y);
    for (int i = 0; i <= n; i++)    L[i][0] = 0;
    for (int j = 0; j <= m; j++)    L[0][j] = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (x[i - 1] == y[j - 1])
                L[i][j] = L[i - 1][j - 1] + 1;
            else    
                L[i][j] = max(L[i - 1][j], L[i][j - 1]);
        }
    }
    return L[n][m];
}

void LCS(char x[], char y[], int L[][100])
{
    int tmp = 0, i = strlen(x), j = strlen(y), lmax = LCS_length(x, y, L); 
    char z[50];
    while (L[i][j] != 0) {
        if (x[i - 1] == y[j - 1]) {
            z[tmp++] = x[i - 1];
            i--;
            j--;
        }
        else {
            if (L[i - 1][j] >= L[i][j - 1])
                i--;
            else 
                j--;
        }
    }
    for (int i = lmax - 1; i >= 0; i--) 
        cout << z[i];
}

int main ()
{
    char x[100], y[100];
    int L[100][100];
    Input(x, y);
    LCS(x, y, L);
    return 0;   
}