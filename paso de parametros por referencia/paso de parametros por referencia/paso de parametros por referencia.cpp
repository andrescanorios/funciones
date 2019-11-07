#include <string>
#include <iostream>
using namespace std;
void intercambio(int*x, int*y)
{
	int z;
	z = *x;
	*x = *y;
	*y = z;
}

int main()
{
	int a, b;
	cout << "ingresa el primer valor: ";
	cin >> a;
	cout << "ingresa el segundo valor: ";
	cin >> b ;
	cout << endl;
	cout << "valor de a: " << a << " valor de b: " << b << endl;
	intercambio(&a, &b);
	cout << endl << "despues del intercambio:" << endl << endl;
	cout << "valor de a: " << a << " valor de b: " << b << endl;
	system("pausa");
	return 0;
}