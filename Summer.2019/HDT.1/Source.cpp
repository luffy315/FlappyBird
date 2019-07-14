#include <iostream>

using namespace std;

class HCN
{
private:
	float d;
	float r;
public:
	void Nhap()
	{
		cout << "Nhap chieu dai, chieu rong";
		cin >> d >> r;
	}
	float TinhCV();
	float TinhDT();
};
float HCN::TinhCV()
{
	return (d + r) * 2;
}
float HCN::TinhDT()
{
	return d * r;
}

class DayHCN
{
private:
	int sl;
	HCN *dayHCN;
public:
	void Nhap();
	int CVMax();
	int DTMax();
};
void DayHCN::Nhap()
{
	cout << "Nhap so luong hcn:";
	cin >> sl;
	dayHCN = new HCN[sl];
	for (int i = 0; i < sl; i++)
	{
		cout << "Nhap hinh chu nhat thu " << i << ":\n";
		dayHCN[i].Nhap();
		dayHCN[i].TinhCV();
		dayHCN[i].TinhDT();
	}
}

int DayHCN::CVMax()
{
	int i = 0;
	for (int j = 1; j < sl; j++)
	{
		if (dayHCN[j].TinhCV() > dayHCN[i].TinhCV())
			i = j;
	}
	return i;
}

int DayHCN::DTMax()
{
	int i = 0;
	for (int j = 1; j < sl; j++)
	{
		if (dayHCN[j].TinhDT() > dayHCN[i].TinhDT())
			i = j;
	}
	return i;
}

void main()
{
	DayHCN a;
	a.Nhap();
	int i;
	i = a.CVMax();
	cout << "HCN co CV max la:" << i << endl;
	i = a.DTMax();
	cout << "HCN co DT max la:" << i << endl;
	system("pause");
}