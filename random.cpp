#include <iostream>
#include <stdlib.h>
#include <ctime>
using namespace std;
int main()
{
	int i, j, h, elector;
	int vactor[9], CMagico[3][3];
	srand(time(NULL));
	int g;
	for (i = 0; i <= 9; i++)
	{ //solo permite guardar 10 numeros (**usted puede escoger)
		g = i;
		elector = 1 + rand() % (10 - 1); //escoge un numero entre 1 y 10 (**usted puede escoger cuales numeros quiere) no incluye el 11
		for (int d = 0; d <= g; d++)
		{
			if (elector == vactor[d])
			{ //verifica si el numero se repite
				g = g - g;
				i = i - 1;
			}
			while ((g == i) && (elector != vactor[d]) && (d == i))
			{						 //verifica que sea el ultimo
				vactor[i] = elector; //llenamos el vector
			}
		}
	}
	for (i = 0; i <=9; i++)
	{							  //recorremos el arreglo y lo imprimimos
		cout << vactor[i] << " "; //muestro horizontalmente los numeros
	}
	for (i = 0, h = 0; i < 3; i++)
	{
		for (j = 0; j < 3, h < 10; j++, h++)
		{
			CMagico[i][j] = vactor[h];
			//cout << vactor[i] << " ";
		}
	}
	cout << "\n";

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			cout << CMagico[i][j] << "  ";
		}
		cout << "\n";
	}

	return 0;
}