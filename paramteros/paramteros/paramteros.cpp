#include <iostream>
#include <string>
#include <math.h>
#include <windows.h>
using namespace std;
int invertir(int num)
{
	int inverso = 0, cifra;
	while (num!=0)
	{
		cifra = num % 10;
		inverso = inverso * 10 + cifra;
		num = num / 10;
	}
	return inverso;
}
int main()
{
	int num, resultado;
	cout << "intrudouce un numero entero: ";
	cin >> num;
	resultado = invertir(num);
	cout << "numero original: " << num << endl;
	cout << "numero invertido: " << resultado << endl;
	system("pausa");
	return 0;
}