#include <string>
#include <iostream>
#include <windows.h>
#include <math.h>
#include <cstdlib>
using namespace std;
void pausa()
{
	cout << "presiona una tecla y enter o presiona enter para salir"<<endl;
	getwchar();
	getwchar();
}
void pregu1()
{
	cout << "ingrese el primer numero";
}
void pregu2()
{
	cout << "ingrese el segundo numero";
}
void suma(float a, float b)
{
	float suma;
	suma = a + b;
	cout << suma;
}
void resta(float a, float b)
{
	float resta;
	resta = a - b;
	cout << resta;
}
void multiplicacion(float a, float b)
{
	float mult;
	mult = a * b;
	cout << mult;
}
void division(float a, float b)
{
	float division;
	division = a / b;
	cout << division;
}
void potenciacion(float a, float b)
{
	float potenciacion;
	potenciacion = pow(a,b);
	cout << potenciacion;
}
void menu()
{
	cout << "ingresa 1 para sumar" << endl;
	cout << "ingresa 2 para restar" << endl;
	cout << "ingresa 3 para multiplicar" << endl;
	cout << "ingresa 4 para dividir" << endl;
	cout << "ingresa 5 para potenciar" << endl;
	cout << "ingresa 6 para salir" << endl;
}
void todo()
{
	bool bandera = " ";
	int tecla, a, b, c, d, e;
	do
	{
		menu();
		cin >> tecla;
		switch (tecla)
		{
		case '1':
			pregu1();
			cin >> a;
			pregu2();
			cin >> b;
			suma(a,b);
			break;
		case '2':
			pregu1();
			cin >> a;
			pregu2();
			cin >> b;
			resta(a, b);
			break;
		case '3':
			pregu1();
			cin >> a;
			pregu2();
			cin >> b;
			multiplicacion(a, b);
			break;
		case '4':
			pregu1();
			cin >> a;
			pregu2();
			cin >> b;
			division(a, b);
			break;
		case '5':
			pregu1();
			cin >> a;
			pregu2();
			cin >> b;
			potenciacion(a, b);
			break;
		default:
			cout << "quieres salir (si) o (no)";
			cin >> bandera;
			break;
		}
	} while (bandera="si");

}
int main()
{
	todo();
}