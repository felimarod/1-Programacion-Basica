#include <iostream>
#include <stdio.h>
//#include <conio.h>
//#include <math.h>
//#include <string.h>
#include <stdlib.h>
#include <time.h>

#define TAM 4
#define MIN 1
#define MAX 4
int matriz[TAM][TAM];
using namespace std;

bool verifica(int, int, int);
bool verifsub(int);
int main()
{
	int f, c, aux, ing = 8;
	srand(time(0));

	//cout << "¿Cuantos valores desea ingresar? ";
	//cin >> ing;

	cout << "\nIngrese las posiciones en las cuales va a ingresar datos. \n\nSi ingresa una posicion invalida se le pedira que vuelva a ingresar la posicion. \n\nSi el valor que ingresa se repite en la fila, columna o no esta en el rango admitido, se le pedira que ingrese un nuevo valor en la posicion.\n " << endl;

	for (int i = 0; i < ing; i++)
	{
		do
		{
			cout << "Fila: ";
			cin >> f;

			cout << "Columna: ";
			cin >> c;
		} while (c > 3 || c < 0 || f > 3 || f < 0);
		//		do
		//		{
		cout << "Ingrese un valor en la posicion " << f << ", " << c << " del sudoku :";
		do
		{
			cin >> matriz[f][c];
		} while (matriz[f][c] > MAX || matriz[f][c] < MIN);
	}
	cout << "===========================" << endl;

	for (f = 0; f < TAM; f++) //mostrar sudoku sin resolver
	{
		for (c = 0; c < TAM; c++)
		{
			cout << matriz[f][c] << "\t";
		}
		cout << endl;
	}

	for (f = 0; f < (TAM / 2); f++) //hacer primer subcuadricula
	{
		for (c = 0; c < (TAM / 2); c++)
		{
			if (matriz[f][c] == 0)
			{
				do
				{
					aux = MIN + rand() % (MAX);
				} while (verifsub(aux) == false);

				matriz[f][c] = aux;
			}
		}
	}

	for (f = 0; f < TAM; f++)
	{
		for (c = 0; c < TAM; c++)
		{
			if (matriz[f][c] == 0)
			{
				do
				{
					aux = MIN + rand() % (MAX);
				} while (verifica(f, c, aux) == false);

				matriz[f][c] = aux;
			}
		}
	}
	cout << "===========================" << endl;

	for (f = 0; f < TAM; f++)
	{
		for (c = 0; c < TAM; c++)
		{
			cout << matriz[f][c] << "\t";
		}
		cout << endl;
	}
	return 0;
}
bool verifsub(int aux)
{
	//verificar primer subcuadricula, entorno a esta se solucionan las demas
	for (int f = 0; f < (TAM / 2); f++)
	{
		for (int c = 0; c < (TAM / 2); c++)
		{
			if (matriz[f][c] == aux)
				return false;
		}
	}
	return true;
}
bool verifica(int f, int c, int aux)
{
	//verificar que no se repita en fila
	for (int j = 0; j < TAM; j++)
	{
		if (matriz[f][j] == aux)
			return false;
	}
	//verificar que no se repita en columna
	for (int j = 0; j < TAM; j++)
	{
		if (matriz[j][c] == aux)
			return false;
	}

	return true;
}