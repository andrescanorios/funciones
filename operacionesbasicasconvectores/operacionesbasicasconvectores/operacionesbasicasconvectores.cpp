#include<iostream>
using namespace std;
int main()
{
	float numero[10];
	for (int i = 0; i < 10; i++) {
		cout << "Ingresa el valor de " << i + 1 << " posicion: ";
		cin >> numero[i];
	}
	float suma = 0, resta = 0, multiplicacion, division;
	multiplicacion = numero[0];
	division = numero[0];
	for (int i = 0; i < 10; i++) {
		suma += numero[i];
		resta -= numero[i];
		multiplicacion *= numero[i];
		division /= numero[i];
	}
	cout << "el resultado de la suma es: " << suma << endl;
	cout << "el resultado de la resta es: " << resta << endl;
	cout << "el resultado de la multiplicacion es: " << multiplicacion << endl;
	cout << "el resultado de la division es: " << division << endl;
}