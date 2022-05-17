#include <iostream>
using namespace std;
int main()
{
   int so[4], max, second;
   for (int i = 0; i < 4; i++)
   {
      cout << "Nhap so thu " << (i + 1) << ": ";
      cin >> so[i];
   }

   if (so[0] < so[1])
   {
      max = so[1];
      second = so[0];
   }
   else
   {
      max = so[0];
      second = so[1];
   }

   for (int i = 2; i < 4; i++)
   {
      if (so[i] > max)
      {
         second = max;
         max = so[i];
      }
      else if (so[i] > second && so[i] != max)
      {
         second = so[i];
      }
   }
   cout << "So lon thu 2 la: " << second;

   return 0;
}
