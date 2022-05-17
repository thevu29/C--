#include <iostream>
#include <cstdlib>
#include <time.h>
#include <math.h>
using namespace std;

int main ()
{   
    srand(time(NULL));
    int rdom;
    long cnt1 = 0, cnt2 = 0, cnt3 = 0, cnt4 = 0, cnt5 = 0, cnt6 = 0;
    for (long i = 1; i <= 6 * pow(10,6); i++) {
        rdom = rand() % 6 + 1;
        if (rdom == 1) cnt1++;
        if (rdom == 2) cnt2++;
        if (rdom == 3) cnt3++;
        if (rdom == 4) cnt4++;
        if (rdom == 5) cnt5++;
        if (rdom == 6) cnt6++;
    }
    cout << "So lan xuat hien nut 1: " << cnt1 << endl;
    cout << "So lan xuat hien nut 2: " << cnt2 << endl;
    cout << "So lan xuat hien nut 3: " << cnt3 << endl;
    cout << "So lan xuat hien nut 4: " << cnt4 << endl;
    cout << "So lan xuat hien nut 5: " << cnt5 << endl;
    cout << "So lan xuat hien nut 6: " << cnt6;
    return 0;
}