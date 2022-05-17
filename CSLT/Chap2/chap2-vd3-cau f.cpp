#include <iostream>
using namespace std;

int main () 
{
   int a, b, c, d;
   cout << "a= ";
   cin >> a;
   cout << "b= ";
   cin >> b;
   cout << "c= ";
   cin >> c;
   cout << "d= ";
   cin >> d;
   int max = a;
   if (b > max) {
	max = b;
   }
   if (c > max) {
   	max = c;
   }
   if (d > max) {
   	max = d;
   }
   int second;
   if (a > second && a < max) {
   	second = a;
   }
   if (b> second && b < max) {
   	second = b;
   }
   if (c > second && c < max) {
   	second = c;
   }
   if (d > second && d < max) {
   	second = d;
   }
   cout << "So lon thu 2 la: " << second;
   
   return 0;
}
