#include <string>
#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
	char letra;
	cout << "teclea una letra";
	cin >> letra;
	switch (letra)
	{
	case 'a':
		cout << "Es una  vocal";
		break;
	case 'e':
		cout << "Es una  vocal";
		break;
	case 'i':
		cout << "Es una  vocal";
		break;
	case 'o':
		cout << "Es una  vocal";
		break;
	case 'u':
		cout << "Es una  vocal";
		break;
	default:
		cout << "Es una  consonante";
		break;
	}
}