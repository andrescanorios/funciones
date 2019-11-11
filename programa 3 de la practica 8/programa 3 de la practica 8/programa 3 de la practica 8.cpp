#include <string>
#include <iostream>
using namespace std;
void horas(int hora, int min, int segu)
{
	if (hora <= 23 && min <= 59 && segu <= 58)
	{
		segu = segu + 1;
		cout << "son las  " << hora << " horas con " << min << " minutos y " << segu << " segundos";
	}
	else if (hora < 23 && min <= 58 && segu <= 59)
	{
		min = min + 1;
		segu = 0;
		cout << "son las  " << hora << " horas con " << min << " minutos y " << segu << " segundos";
	}
	else if (hora < 23 && min <= 59 && segu <= 59)
	{
		hora = hora + 1;
		min = 0;
		segu = 0;
		cout << "son las  " << hora << " horas con " << min << " minutos y " << segu << " segundos";
	}
	else if (hora <= 23 && min <= 59 && segu <= 59)
	{
		hora = 0;
		min = 0;
		segu = 1;
		cout << "son las  " << hora << " horas con " << min << " minutos y " << segu << " segundos";
	}
	else if (hora = 24 && min <= 58 && segu <= 59)
	{
		hora = 0;
		min = min + 1;
		segu = 0;
		cout << "son las  " << hora << " horas con " << min << " minutos y " << segu << " segundos";
	}
}
int main()
{
	int hora, min, segu;
	cout << "Ingresa la hora: "; cin >> hora;
	cout << "Ingresa los minutos: "; cin >> min;
	cout << "Ingresa los segundos: "; cin >> segu;
	horas(hora, min, segu);
	return 0;
}