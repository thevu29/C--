#include <iostream>
using namespace std;

void HaNoiTower(char from, char mid, char to, int n)
{
    if (n == 0) return;
    HaNoiTower(from, to, mid, n - 1);
    cout << "Chuyen dia " << n << " tu " << from << " sang " << to << endl;
    HaNoiTower(mid, from, to, n - 1);
}

int main ()
{
    int n;
    cin >> n;
    HaNoiTower('A', 'B', 'C', n);
    return 0;
}
