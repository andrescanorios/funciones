#include <iostream>
#include <string>
using namespace std;
void incremento12(int x)
{
	int incremento;
	incremento = (x * 0.12) + x;
	cout << "tu salario con el incremento es " << incremento << endl;
}
void incremento8(int x)
{
	int incremento;
	incremento = (x * 0.08) + x;
	cout << "tu salario con el incremento es " << incremento << endl;
}
void incremento7(int x)
{
	int incremento;
	incremento = (x * 0.07) + x;
	cout << "tu salario con el incremento es " << incremento << endl;
}
void incremento6(int x)
{
	int incremento;
	incremento = (x * 0.06) + x;
	cout << "tu salario con el incremento es " << incremento << endl;
}
int main()
{
	int salario;
    cout << "profesor ingrese su salario: ";
	cin >> salario;
	if (salario<8000)
	{
		incremento12(salario);
	}
	else
	{
		if (salario>=8000 && salario<=15000)
		{
			incremento8(salario);
		}
		else
		{
			if (salario > 15000 && salario <= 20000)
			{
				incremento7(salario);
			}
			else
			{
				if (salario>25000)
				{
					incremento6(salario);
				}
			}
		}
	}
	return 0;
}