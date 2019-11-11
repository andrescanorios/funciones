#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string>
#include <iostream>
using namespace std;
int main()
{
	float x, y;
    printf("ingrese el valor de x: ");
	cin >> x;
	if (x<0 || x>50)
	{
		y = 0;
	}
	else
	{
		if (x <= 10)
		{
			y = 4 / x;
		}
		else
		{
			if (x <= 25)
			{
				y = pow(x, 3) + pow(x, 3) - 18;
			}
		}
	}
	printf("el valor de x es ",x," y el valor de *y* es ",y);
}