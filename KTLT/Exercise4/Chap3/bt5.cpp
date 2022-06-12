#include <iostream>
#include <string.h>
using namespace std;

void Insert(char s1[], char s2[], int p)
{
    int n = strlen(s1) + strlen(s2), j = strlen(s1) - 1, k = strlen(s2) - 1; 

    for (int i = n - 1; i >= p; i--)      
    {
        if (i >= p + strlen(s2))
            s1[i] = s1[j--];
        else
            s1[i] = s2[k--];
    }

    cout << s1;
}

int main()
{
    int p;
    char s1[50], s2[50];
    cout << "s1: ";
    cin.getline(s1, 50);
    cout << "s2: ";
    cin.getline(s2, 50);
    cout << "p: ";
    cin >> p;
    Insert(s1, s2, p);
    return 0;
}