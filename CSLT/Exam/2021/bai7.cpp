#include <iostream>
using namespace std;

int mystery(int x, int y)
{
    if (y == 1)
        return x;
    else
        return x + mystery(x, y - 1);        //ham de quy nhan 2 so
}

int main()
{
    int x, y;
    cout << "Nhap 2 so nguyen: ";       
    cin >> x >> y;
    cout << "Ket qua la: " << mystery(x, y);
    return 0;
}
