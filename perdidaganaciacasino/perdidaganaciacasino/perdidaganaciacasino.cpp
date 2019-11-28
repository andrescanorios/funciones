#include <time.h>
#include <cstdlib>
#include <string>
#include <iostream>
using namespace std;
int main()
{
	int saldoactual, num, perdida;
	double  ganancia, apuesta;
	string nombre;
	bool desicion;
	srand(time(NULL));
	num = 1 + rand() % (3-1);
    cout << "ingrese su nombre: ";
	cin >> nombre;
	cout << "ingrese su saldo actual: ";
	cin >> saldoactual;
	do
	{
		cout << "cuanto desea apostar: ";
		cin >> apuesta;
		switch (num)
		{
		case 1:
			ganancia = apuesta;
			saldoactual = saldoactual + ganancia;
			cout << nombre << " tu ganancia es de " << ganancia << " y tu saldo actual es de " << saldoactual << endl;
			break;
		case 2:
			perdida = apuesta;
			saldoactual = saldoactual - perdida;
			cout << nombre << " tu perdida es de " << perdida << " y tu saldo actual es de " << saldoactual << endl;
			break;
		default:
			break;
		}
		cout << "saldoactual => " << saldoactual;
	} while (saldoactual=0);
	return 0;
}