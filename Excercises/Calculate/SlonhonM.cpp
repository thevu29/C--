#include <iostream>
using namespace std;

int main ()     //S = 2 + 4 + 6 + ... + 2n
{
    int M, tmp;
    cout << "M = ";
    cin >> M;
    int s = 0, i = 1;
    while (true) {
        s += 2 * i;
        if (s > M) {
            tmp = i;
            break;
        }
        i++;
    }
    cout << "Gia tri n nho nhat sao cho tong S > M la: " << tmp;
    return 0;
}