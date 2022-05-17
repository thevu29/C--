#include <iostream>
using namespace std;

void swap(int *&a,int *&b)
{
   int tmp = *a;
   *a = *b;
   *b = tmp;
}
 
int main()
{
    int a = 5, b = 6;
    swap(a, b);
    cout << a << endl;
    cout << b;
    return 0;
}