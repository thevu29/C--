#include <iostream>
using namespace std;

int main()
{
	int nguoi1, nguoi2;
	cout << "TRO CHOI KEO BUA BAO " << endl;
	cout << "Nhap 1 la KEO" << endl;
	cout << "Nhap 2 la BUA" << endl;
	cout << "Nhap 3 la BAO" << endl;
	cout << "\nNguoi 1 ra: ";
	cin >> nguoi1;
	cout << "Nguoi 2 ra: ";
	cin >> nguoi2;
	cout << endl;
	switch (nguoi1)
	{
	case 1:
		if (nguoi2 == 2)
		{
			cout << "Nguoi 1 ra keo " << endl;
			cout << "Nguoi 2 ra bua " << endl;
			cout << " => Nguoi 2 chien thang ";
		}
		else if (nguoi2 == 1)
		{
			cout << "Nguoi 1 ra keo " << endl;
			cout << "Nguoi 2 ra keo " << endl;
			cout << " => Hoa nhau";
		}
		else if (nguoi2 == 3)
		{
			cout << "Nguoi 1 ra keo " << endl;
			cout << "Nguoi 2 ra bao " << endl;
			cout << " => Nguoi 1 chien thang ";
		}
		break;
	case 2:
		if (nguoi2 == 2)
		{
			cout << "Nguoi 1 ra bua " << endl;
			cout << "Nguoi 2 ra bua " << endl;
			cout << " => Hoa nhau ";
		}
		else if (nguoi2 == 1)
		{
			cout << "Nguoi 1 ra bua " << endl;
			cout << "Nguoi 2 ra keo " << endl;
			cout << " => Nguoi 1 chien thang ";
		}
		else if (nguoi2 == 3)
		{
			cout << "Nguoi 1 ra bua" << endl;
			cout << "Nguoi 2 ra bao " << endl;
			cout << " => Nguoi 2 chien thang ";
		}
		break;
	case 3:
		if (nguoi2 == 2)
		{
			cout << "Nguoi 1 ra bao " << endl;
			cout << "Nguoi 2 ra bua " << endl;
			cout << " => Nguoi 1 chien thang ";
		}
		else if (nguoi2 == 1)
		{
			cout << "Nguoi 1 ra bao " << endl;
			cout << "Nguoi 2 ra keo " << endl;
			cout << " => Nguoi 2 chien thang ";
		}
		else if (nguoi2 == 3)
		{
			cout << "Nguoi 1 ra bao " << endl;
			cout << "Nguoi 2 ra bao " << endl;
			cout << " => Hoa nhau ";
		}
		break;
	default:
		cout << "Nhap sai. Phai nhap 1, 2, 3 tuong trung cho keo, bua, bao ";
		break;
	}
	return 0;
}
