#include <iostream>
using namespace std;

class DT
{
private: 
	int n;	//Bậc đa thức
	double *a;
public:
	DT operator-();
	DT operator+(DT d2);
	DT operator*(DT d2);
	//double operator^(double x);
	friend ostream& operator<<(ostream& os, DT d);
	friend istream& operator>>(istream& is, DT& d);

};
DT DT::operator-()
{
	DT d;
	d.n = n;
	d.a = new double[n+1];
	for (int i = 0; i <= n; i++)
		d.a[i] = -a[i];
	return d;
}
ostream& operator<<(ostream& os, DT d)
{
	os << "Cac he so: ";
	for (int i = d.n ; i >= 0; i--)
	{
		os << d.a[i]<<" ";
	}
	os << "\n";
	return os;
}
istream& operator>>(istream& is, DT &d)
{
	cout << "Bac da thuc: ";
	cin >> d.n;
	d.a = new double[d.n+1];
	cout << "Nhap cac he so\n";
	for (int i = d.n ; i >= 0; i--)
	{
		cin >> d.a[i];
	}
	return is;
}
DT DT::operator+(DT d2)
{
	DT d;
	if (d2.n >= n)
	{
		d.n = d2.n;
		//d.a = new double[d.n];
		d.a = d2.a;
		for (int i = 0; i < n; i++)
			d.a[i] = a[i] + d2.a[i];
	}
	else
	{
		d.n = n;
		d.a = a;
		for (int i = 0; i < d2.n; i++)
			d.a[i] = a[i] + d2.a[i];

	}
	return d;
}
DT DT::operator*(DT d2)
{
	DT d;
	int bac = n + d2.n;
	d.n = bac;
	d.a = new double[bac+1];
	for (int i = 0; i <= bac; i++)
		d.a[i] = 0;
	for(int i=0;i<=n;i++)
		for (int j = 0; j <= d2.n; j++)
		{
			d.a[i+j] = d.a[i+j] + a[i] * d2.a[j];
		}
	return d;
}
int main()
{
	DT d,f;
	cin >> d;
	cout << d;
	cin >> f;
	cout << f;
	cout << (d*f);
	system("pause");
}