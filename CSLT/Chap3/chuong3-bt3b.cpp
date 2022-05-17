#include <iostream>
using namespace std;
 
int main () 
{
    int a, b, bcnn, max;
 	cout << "Nhap a: ";
    cin >> a;
    cout << "Nhap b: ";
    cin >> b;
    if(a == 0 || b == 0) {
        cout << a << " va " << b << " khong co boi chung nho nhat ";
    } 
	else {
        if(a > b) {
            max = a;
        } 
		else {
            max = b;
        }
 
        int i = max;
         
        while(true)
        {
            if(i % a == 0 && i % b == 0)
            {
                bcnn = i;
                break;
            }
            i += max;
        }
        cout << "Boi chung nho nhat cua " << a << " va " << b << " la: " << bcnn << endl;
    }
    return 0;
}
