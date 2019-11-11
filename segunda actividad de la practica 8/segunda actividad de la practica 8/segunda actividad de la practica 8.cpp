#include <iostream>
#include <string>
using namespace std;
void nu1(int a, int b, int c)
{
	if (a > b && a > c)
	{
		cout << "el mayor es " << a;
	}
	else
	{
		if (a > b && a < c)
		{
			cout << "el de enmedio es " << a;
		}
		else
		{
			if (a > c && a < b)
			{
				cout << "el de enmedio es " << a;
			}
			else
			{
				if (a < b && a < c)
				{
					cout << "el menor es es " << a;
				}
			}
		}
	}
}
void nu2(int a, int b, int c)
{
	if (b > a && b > c)
	{
		cout << "el mayor es " << b;
	}
	else
	{
		if (b > a && b < c)
		{
			cout << "el de enmedio es " << b;
		}
		else
		{
			if (b > c && b < a)
			{
				cout << "el de enmedio es " << b;
			}
			else
			{
				if (b < a && b < c)
				{
					cout << "el menor es es " << b;
				}
			}
		}
	}
}
void nu3(int a, int b, int c)
{
	if (c > b && c > a)
	{
		cout << "el mayor es " << c;
	}
	else
	{
		if (c > b && c < a)
		{
			cout << "el de enmedio es " << c;
		}
		else
		{
			if (c > a && c < b)
			{
				cout << "el de enmedio es " << c;
			}
			else
			{
				if (c < b && c < a)
				{
					cout << "el menor es es " << c;
				}
			}
		}
	}
}
int main()
{
    int a,b,c;
	cout << " ingresa el primer numero: ";
	cin >> a;
	cout << " ingresa el segundo numero: ";
	cin >> b;
	cout << " ingresa el tercer numero: ";
	cin >> c;
	nu1(a, b, c);
	cout << endl;
	nu2(a, b, c);
	cout << endl;
	nu3(a, b, c);
}
