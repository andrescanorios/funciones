#include <string>
#include <iostream>
using namespace std;
void menu()
{
	cout << "ingresa 1 para sumar" << endl;
	cout << "ingresa 2 para restar" << endl;
	cout << "ingresa 3 para multiplicar" << endl;
	cout << "ingresa 4 para dividir" << endl;
}
void suma(float a, float b)
{
	int suma;
	suma = a + b;
	cout << suma;
}
void resta(float a, float b)
{
	int resta;
	resta = a - b;
	cout << resta;
}
void multi(float a, float b)
{
	int multi;
	multi = a * b;
	cout << multi;
}
void divi(float a, float b)
{
	int divi;
	divi = a / b;
	cout << divi;
}
void p1()
{
	cout << "ingresa el primer valor: ";
}
void p2()
{
	cout << "ingresa el segundo valor: ";
}
int main()
{
	int tecla;
	float a, b;
	menu();
	cin >> tecla;
	switch (tecla)
	{
	case 1:
		p1();
		cin >> a;
		p2();
		cin >> b;
		cout << "el resultado de la operacion es ";
		suma(a, b);
		break;
	case 2:
		p1();
		cin >> a;
		p2();
		cin >> b;
		cout << "el resultado de la operacion es ";
		resta(a, b);
		break;
	case 3:
		p1();
		cin >> a;
		p2();
		cin >> b;
		cout << "el resultado de la operacion es ";
		multi(a, b);
		break;
	case 4:
		p1();
		cin >> a;
		p2();
		cin >> b;
		cout << "el resultado de la operacion es ";
		divi(a, b);
		break;
	default:
		cout << "opcion no reconocida";
		break;
	}
}