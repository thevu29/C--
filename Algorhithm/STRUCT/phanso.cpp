#include <iostream>
#include <math.h>
using namespace std;

struct Phanso
{
    int tu;
    int mau;
};

int ucln(int a, int b)
{
    if (a % b == 0)
        return b;
    return ucln(b, a % b);
}

Phanso *Cong(Phanso ps1, Phanso ps2)
{
    Phanso *ps3 = new Phanso; 
    ps3 -> tu = ps1.tu * ps2.mau + ps1.mau * ps2.tu;
    ps3 -> mau = ps1.mau * ps2.mau;
    return ps3;
}

Phanso *Tru(Phanso ps1, Phanso ps2)
{
    Phanso *ps3 = new Phanso; 
    ps3 -> tu = ps1.tu * ps2.mau - ps1.mau * ps2.tu;
    ps3 -> mau = ps1.mau * ps2.mau;
    return ps3;
}

Phanso *Toigian(Phanso ps)
{
    int uc = ucln(ps.tu, ps.mau);
    Phanso *pstoigian = new Phanso;
    pstoigian -> tu = ps.tu / uc;
    pstoigian -> mau = ps.mau / uc;
    return pstoigian;
}

int main ()
{
    Phanso ps1, ps2;
    cin >> ps1.tu >> ps1.mau >> ps2.tu >> ps2.mau;
    cout << ps1.tu << "/" << ps1.mau << " " << ps2.tu << "/" << ps2.mau << endl;
    Phanso *cong = Cong(ps1, ps2);
    cout << "Tong 2 ps = " << cong -> tu << "/" << cong -> mau << endl;
    Phanso *tru = Tru(ps1, ps2);
    cout << "Hieu 2 ps = " << tru -> tu << "/" << tru -> mau << endl;
    Phanso *toigian = Toigian(*cong);
    cout << "Tong 2 ps sau khi toi gian = " << toigian -> tu << "/" << toigian -> mau;
    return 0;
}