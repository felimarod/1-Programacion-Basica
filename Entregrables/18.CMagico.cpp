#include <iostream>
#include <stdlib.h>
#include <time.h>

#define N 3
int CMagico[N][N], i, j;

using namespace std;

bool verifdif(int);
bool verificar(int);

int main()
{
	int aux, cons = 0;
	srand(time(NULL));

	for (i = 0; i <= (N * N); i++)
	{
		cons = cons + i;
	}
	cons = cons / N; //constante magica

	cout << "\n\tCUADRADO MAGICO DE " << N << " * " << N << "\n\n";

	do
	{
		for (i = 0; i < N; i++) //hacer todo 0
		{
			for (j = 0; j < N; j++)
			{
				CMagico[i][j] = 0;
			}
		}
		CMagico[1][1] = 5;		//el centro, en un cuadrado magico de 3*3 es 5
		for (i = 0; i < N; i++) //hacer matriz aleatoria con numeros diferentes
		{
			for (j = 0; j < N; j++)
			{
				if (CMagico[i][j] == 0)
				{
					do
					{
						aux = 1 + rand() % (9); //numero aleatorio entre 1 y 9
					} while (verifdif(aux) == false);

					CMagico[i][j] = aux;
				}
			}
		}
	} while (verificar(cons) == false);

	for (i = 0; i < N; i++) //mostrar matriz
	{
		for (j = 0; j < N; j++)
		{
			cout << CMagico[i][j] << "\t";
		}
		cout << "\n";
	}

	return 0;
}
bool verifdif(int dif)
{
	//verifica si es diferente a los números existentes en la matriz
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (CMagico[i][j] == dif)
				return false;
		}
	}
	return true;
}
bool verificar(int Sum)
{
	int f1 = 0, f2 = 0, f3 = 0, v1 = 0, v2 = 0, v3 = 0, Dia1 = 0, Dia2 = 0;

	for (i = 0, j = N - 1; i < N; i++, j--)
	{
		f1 = f1 + CMagico[0][i]; //SUMAS HORIZONTALES
		f2 = f2 + CMagico[1][i];
		f3 = f3 + CMagico[2][i];
		v1 = v1 + CMagico[i][0]; //SUMAS VERTICALES
		v2 = v2 + CMagico[i][1];
		v3 = v3 + CMagico[i][2];
		Dia1 = Dia1 + CMagico[i][i]; //SUMA DIAGONAL 0,0 a 2,2
		Dia2 = Dia2 + CMagico[i][j]; //SUMA DIAGONAL 0,2 a 2,0
	}

	if (f1 == Sum && f2 == Sum && f3 == Sum && v1 == Sum && v2 == Sum && v3 == Sum && Dia1 == Sum && Dia2 == Sum)
		return true;
	else
		return false;
}