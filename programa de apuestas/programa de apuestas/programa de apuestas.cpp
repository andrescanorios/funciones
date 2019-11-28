#include <cstdlib>
#include <string>
#include <iostream>
using namespace std;
int main()
{
	int saldini,nomusu,apuesta,buen,mal;
	bool resultado;
	cout << "cual es su nombre: ";
	cin >> nomusu;
	cout << "cuanto saldo tiene disponible" << endl;
	cin >> saldini;
	cout << "hola y bienbenido " << nomusu << endl;
	do
	{
		srand((unsigned)time(NULL));
		resultado = rand() % 3 - 1;
		cout << "tu saldo es " << saldini;
		cout << "cuanto quieres apostar: "; cin >> apuesta;
		if (resultado="gana")
		{
			buen = apuesta + apuesta;
			cout << "tu saldo actual es de " << buen;
		}
		else
		{
			mal = saldini - apuesta;
			cout << "tu saldo actual es" << mal;
		}
	} while (saldini<=0);
}