#include <iostream>
using namespace std;
int main()
{
	int fact, n, i;
	cout << "ingresa el numero: ";
	cin >> n;
	for ( i = 0; i < n; i++)
	{
		fact = n * i;
		cout << fact << endl;
	}
	return 0;
}