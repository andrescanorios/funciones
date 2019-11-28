#include <cstdlib>
#include <time.h>
#include <string>
#include <iostream>
using namespace std;
int main()
{
	string nombre;
	float saldoinicial, saldoactual,aleatorio;
	int seguirapostando, apuesta;
	cout << "bienbenido a mi casino" << endl;
	cout << "introduce tu nombre: ";	cin >> nombre;
	cout << "cual es tu saldo"; cin >> saldoinicial;
	saldoactual = saldoinicial;
	do
	{
		cout << "cuanto deseas apostar: "; cin >> apuesta;
		if (apuesta<saldoactual)
		{
			aleatorio = rand() % 2;
			if (aleatorio==1)
			{
				saldoactual = saldoactual + apuesta;
				cout << "felicidades has ganado " << apuesta;
				cout << "tu saldo actual es " << saldoactual;
				
			}
			else
			{
				saldoactual = saldoactual - apuesta;
				cout << "has perdido " << saldoactual;
			}
		}
		else
		{
			cout << "saldo insuficiente";
			saldoactual = 2;
		}
		if (true)
		{

		}
	} while (true);

}