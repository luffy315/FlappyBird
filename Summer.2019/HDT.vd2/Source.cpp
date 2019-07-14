#include <iostream>

using namespace std;

class DIEM
{
private:
	int x, y;
public:
	/*DIEM()
	{
		x = 0; y = 0;
	}*/
	void Nhap()
	{
		cout << "Nhap toa do x,y: ";
		cin >> x >> y;
	}
	void In()
	{
		cout << "Toa do la " << x << ":" << y << endl;
	}
};

int main()
{
	DIEM *d=new DIEM;
	(*d).In();
	system("pause");
}
