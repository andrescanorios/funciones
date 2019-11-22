#include <iostream>
#include <string>
using namespace std;
int main()
{
	int num = 0;
	do
	{
		cout << num++;
		cout << endl;
	} while (num <= 100);
	{
		num = num++;
	}
	return 0;
}