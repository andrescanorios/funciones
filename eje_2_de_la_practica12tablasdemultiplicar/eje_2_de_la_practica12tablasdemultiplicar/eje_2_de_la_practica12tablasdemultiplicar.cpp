#include <string>
#include <iostream>
using namespace std;
void opcion(int x)
{
	int i, nu, h, mult, men;

	for ( h = 1; h< x; x--)
	{
		for (i = 1; i < 11; i++)
		{
			mult = x * i;
			cout << x << " * " << i << " = " << mult << endl;
		}
	}
}

int main()
{
	int boton;
    cout << "ingrese asta que tabla quiere que se muestre: ";
	cin >> boton;
	do
	{
		opcion(boton);
	} while (boton=0);
}