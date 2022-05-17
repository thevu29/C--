#include <iostream>
using namespace std;

int ucln(int a, int b)
{
    int min, ucln;
    if (a == 0 || b == 0)
        return a + b;
    if (a < b)
        min = a;
    else 
        min = b;
    
    for(int i = 1; i < min; i++) {
        if (min % i == 0) {
            ucln = i;
        }
    }
    return ucln;
}

int main ()
{
    int a, b;
    cout << "Nhap a: ";
    cin >> a;
    cout << "Nhap b: ";
    cin >> b;
    cout << "uoc chung lon nhat cua " << a << " va " << b << " = " << ucln(a, b);
    return 0;
}
