// primer codigo de la practica 8.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//
#include <string>
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
using namespace std;
int main()
{
	float x, y;
	cout << "ingrese el valor de x: ";
	cin >> x;
	if (x<0 || x>50)
	{
		y = 0;
	}
	else if (x<=10)
	{
		y = 4 / x;
	}
	else if (x<=25)
	{
		y = pow(x, x) + pow(x, 3) - 18;
	}
	cout << "";
}