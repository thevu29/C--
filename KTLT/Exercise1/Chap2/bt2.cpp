#include <iostream>
using namespace std;

struct Dthang
{
    int a, b, c;  
};

void Solve(Dthang d1, Dthang d2)         
{                                               
    int D, Dx, Dy;
    D = d1.a * d2.b - d1.b * d2.a;
    Dx = -d1.c * d2.b + d2.c * d1.b;
    Dy = -d1.a * d2.c + d2.a * d1.c; 
    if (D == 0) {
        if (Dx + Dy == 0)
            cout << "2 dt trung nhau ";
        else    
            cout << "2 dt song song ";
    }  
    else        
        cout << "2 dt cat nhau ";
}

int main ()
{
    Dthang d1, d2;
    cout << "Nhap duong thang 1: ";
    cin >> d1.a >> d1.b >> d1.c;
    cout << "Nhap duong thang 2: ";
    cin >> d2.a >> d2.b >> d2.c;    
    cout << "d1: " << d1.a << "x + " << d1.b << "y + " << d1.c << " = 0 " << endl; 
    cout << "d2: " << d2.a << "x + " << d2.b << "y + " << d2.c << " = 0 " << endl; 
    Solve(d1, d2);
    return 0;
}