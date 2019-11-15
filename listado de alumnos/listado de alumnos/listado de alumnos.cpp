#include <string>
#include <iostream>
using namespace std;
void n1()
{
	cout <<"NOMBRE: pedro estrada, GRADO: 3ero GRUPO: A"<<endl;
	cout << "CORREO ELECTRONICO: pedroe@ucol.mx" << endl;
}
void n2()
{
	cout << "NOMBRE: karla garcia, GRADO: 3ero GRUPO: C" << endl;
	cout << "CORREO ELECTRONICO: garciakarla@ucol.mx" << endl;
}
void n3()
{
	cout << "NOMBRE: perla sanches, GRADO: 3ero GRUPO: D" << endl;
	cout << "CORREO ELECTRONICO: sanchezp@ucol.mx" << endl;
}
void n4()
{
	cout << "NOMBRE: Antonio Perez, GRADO: 3ero GRUPO: B" << endl;
	cout << "CORREO ELECTRONICO: perezantonio@ucol.mx" << endl;
}
void n5()
{
	cout << "NOMBRE: Ana Valdez, GRADO: 3ero GRUPO: A" << endl;
	cout << "CORREO ELECTRONICO: valdeza@ucol.mx" << endl;
}
void p1()
{
	cout << "ingresa el numero del alumno"<<endl;
}
void opciones(int x)
{
	switch (x)
	{
	case 1:
		n1();
		break;
	case 2:
		n2();
		break;
	case 3:
		n3();
		break;
	case 4:
		n4();
		break;
	case 5:
		n5();
		break;
	default:
		cout << "valor no valido";
		break;
	}
}
int main()
{
	int nualum;
	p1();
	cin >> nualum;
	opciones(nualum);
}