#include <time.h>
#include <cstdlib>
#include <string>
#include <iostream>
using namespace std;
int main()
{
	long int saldoactual, ganancia = 0,perdida=0, num;
	long int  apuesta, saldoinicial;
	string nombre, desicion;
	cout << "ingrese su nombre: ";
	cin >> nombre;
	cout << "ingrese su saldo actual: ";
	cin >> saldoinicial;
	do
	{
		num = rand() % 2;
		cout << "cuanto desea apostar: ";
		cin >> apuesta;
		cout << "seguro que quieres seguir apostando: "; cin >> desicion;
		saldoactual=saldoinicial;
		if (saldoactual > apuesta)
		{
			if (num == 1)
			{
				saldoactual = saldoactual + apuesta;
				cout << nombre << " tu ganancia es de " << apuesta << endl;
				ganancia = apuesta;
			}
			else
			{
				if (num == 0)
				{
					saldoactual = saldoactual - apuesta;
					cout << nombre << "tu perdida es de " << apuesta << endl;
					perdida = apuesta;
				}
			}
			cout << "saldoactual => " << saldoactual << endl;
			if (ganancia<100000 && perdida<100000)
			{
				cout << nombre << " deseas seguir apostando: "; cin >> desicion;
			}
			else
			{
				cout << "lo siento no puedes seguir apostando :)";
			}
			
		}
		else
		{
			if (ganancia < 100000)
			{
				cout << "tu saldo inicial fue de " << saldoinicial << " y tu saldo actual es de " << saldoactual << endl;
				cout << "lo siento no puedes seguir apostando por lo tanto ingresa no" << endl; cin >> desicion;
			}
			else
			{
				if (perdida < 100000)
				{
					saldoactual = saldoactual-perdida;
					cout << "tu saldo inicial fue de " << saldoinicial << " y tu saldo actual es de " << saldoactual << endl;
					cout << "lo siento no puedes seguir apostando por lo tanto ingresa no" << endl; cin >> desicion;
				}
			}
		}

	} while (desicion != "no");
	return 0;
}