#include <iostream>
#include <string>
#include <math.h>
#include <windows.h>
using namespace std;

int p1()
{
	cout << "ingrese el primer numero";
}
int p2()
{
	cout << "ingrese el segundo numero";
}
void suma()
{
	int a, b;
	int suma;
	cout << "as elegido sumar" << endl;
	p1();
	cin >> a;
	p2();
	cin >> b;
	suma = a + b;
	cout << suma;
}
void resta()
{
	int a, b;
	int resta;
	cout << "as elegido restar" << endl;
	p1();
	cin >> a;
	p2();
	cin >> b;
	resta = a + b;
	cout << resta;
}
void multiplicacion()
{
	int a, b;
	int multiplicacion;
	cout << "as elegido multiplicar" << endl;
	p1();
	cin >> a;
	p2();
	cin >> b;
	multiplicacion = a + b;
	cout << multiplicacion;
}
float division()
{
	int a, b;
	float divicion;
	cout << "as elegido dividir" << endl;
	p1();
	cin >> a;
	p2();
	cin >> b;
	divicion = a + b;
	cout << divicion;
}
void pausa()
{
	cout << endl << "presiona una tecla o enter para continuar" << endl;
	getwchar();
	getwchar;
}
void menu()
{
	bool bandera = false;
	char tecla;
	system("cls");
	cin.clear();
	cout << "ingrese 1 para sumar" << endl;
	cout << "ingrese 2 para restar" << endl;
	cout << "ingrese 3 para multiplicar" << endl;
	cout << "ingrese 4 para dividir" << endl;
	cout << "ingrese 5 para salir" << endl;
	cin >> tecla;
	do
	{
		switch (tecla)
		{
		case '1':
			system("cls");
			suma();
			break;
		case '2':
			system("cls");
			resta();
			break;
		case '3':
			system("cls");
			multiplicacion();
			break;
		case '4':
			system("cls");
			division();
			break;
		case '5':
			bandera = true;
			break;
		default:
			system("cls");
			cout << "opcion no valida" << endl;
			pausa();
			break;
		}
	} while (bandera !=true);
}
int main()
{
	menu();
}