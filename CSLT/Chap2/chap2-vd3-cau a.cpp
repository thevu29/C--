#include <iostream>
using namespace std;

int main ()
{
	int	t, hour, minute, second; 
	cout << "t= ";
	cin >> t;
	hour = (t / 3600) % 24;
	minute = (t % 3600) / 60;
	second = (t % 3600) % 60;
	cout << hour << ":" << minute << ":" << second << endl;
	return 0;
}
