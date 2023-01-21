#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

#define N 3
#define Sum 15
int CMagico[N][N], i, j, conta = 0;

using namespace std;

bool verifdif(int), verificar();

int main()
{
	int aux;
	srand(time(NULL));
	do
	{
		for (int f = 0; f < N; f++) //hacer todo 0
		{
			for (int c = 0; c < N; c++)
			{
				CMagico[f][c] = 0;
			}
		}
		CMagico[1][1] = 5;			//el centro siempre es 5
		for (int f = 0; f < N; f++) //hacer matriz aleatoria con numeros diferentes
		{
			for (int c = 0; c < N; c++)
			{
				if (CMagico[f][c] == 0)
				{
					do
					{
						aux = 1 + rand() % (9);
					} while (verifdif(aux) == false);

					CMagico[f][c] = aux;
				}
			}
		}

	} while (verificar() == false);
	
	cout << "Intento # " << conta << endl;
	cout << "\n";
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
bool verifdif(int aux)
{
	//verifica si es difirente a los demas numeros de la matriz
	for (int f = 0; f < N; f++)
	{
		for (int c = 0; c < N; c++)
		{
			if (CMagico[f][c] == aux)
				return false;
		}
	}
	return true;
}
bool verificar()
{
	int f1, f2, f3, v1, v2, v3, Dia1, Dia2;
	//SUMAS HORIZONTALES
	i = 0;
	for (f1 = 0, j = 0; j < N; j++)
	{
		f1 = f1 + CMagico[i][j];
	}
	i++;
	for (f2 = 0, j = 0; j < N; j++)
	{
		f2 = f2 + CMagico[i][j];
	}
	i++;
	for (f3 = 0, j = 0; j < N; j++)
	{
		f3 = f3 + CMagico[i][j];
	}
	//SUMAS VERTICALES
	i = 0;
	for (v1 = 0, j = 0; j < N; j++)
	{
		v1 = v1 + CMagico[j][i];
	}
	i++;
	for (v2 = 0, j = 0; j < N; j++)
	{
		v2 = v2 + CMagico[j][i];
	}
	i++;
	for (v3 = 0, j = 0; j < N; j++)
	{
		v3 = v3 + CMagico[j][i];
	}
	//SUMAS DIAGONALES
	for (Dia1 = 0, i = 0, j = 0; i < N; i++, j++)
	{
		Dia1 = Dia1 + CMagico[j][i];
	}
	for (Dia2 = 0, i = 0, j = N - 1; i < N; i++, j--)
	{
		Dia2 = Dia2 + CMagico[j][i];
	}

	if (f1 == Sum && f2 == Sum && f3 == Sum && v1 == Sum && v2 == Sum && v3 == Sum && Dia1 == Sum && Dia2 == Sum)
	{
		return true;
	}
	else
	{
		//cout << "Intento # " << conta << endl;
		conta++;
		return false;
	}
}