#include <time.h>
#include <cstdlib>
#include <string>
#include <iostream>
using namespace std;
int main()
{
	int saldoactual, num;
	double  apuesta;
	string nombre,desicion;
    cout << "ingrese su nombre: ";
	cin >> nombre;
	cout << "ingrese su saldo actual: ";
	cin >> saldoactual;
	do
	{
		num = rand() % 2;
		cout << "cuanto desea apostar: ";
		cin >> apuesta;
		if (num==1)
		{
			saldoactual = saldoactual + apuesta;
			cout << nombre << " tu ganancia es de " << apuesta << endl;
		}
		else
		{
			if (num==0)
			{
				saldoactual = saldoactual - apuesta;
				cout << nombre << "tu perdida es de " << apuesta << endl;
			}
		}
		cout << "saldoactual => " << saldoactual << endl;
		cout <<nombre<<" deseas seguir apostando: "; cin >> desicion;
		if (saldoactual<=0)
		{
			cout << "acabas de endeudarte con el casino :))" << endl;
		}
		else
		{
			cout << "puedes seguir apostando :)" << endl;
		}
	} while (desicion!="no");
	return 0;
}