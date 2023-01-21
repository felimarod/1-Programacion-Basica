#include <iostream>
#include <conio.h>
#include <math.h>
#include <stdio.h>
#include <iomanip>

#define a 1000
#define a2 9
#define b 1000
#define b2 9

using namespace std;
void Convertidor();
void sumaBinaria();

int A[a], B[b], A2[a2], B2[b2], n;
int main()
{
	system("Color 7C");
	cout << "Programa hecho por Valentina Culma y Nicolas Diaz" << endl;
	cout << endl;
	cout << "Bienvenidos a nuestro programa, acontinuacion, digite los dos numeros que desea convertir y sumar: " << endl;
	cin >> A[0] >> B[0];
	cout << endl;
	cout << "    " << A[0] << endl;
	cout << "   "
		 << "+" << B[0] << endl;
	cout << "   -------" << endl;
	cout << "    " << A[0] + B[0] << endl;
	Convertidor();
	cout << endl;
	sumaBinaria();
}

void Convertidor()
{
	int N;

	for (N = 0; A[N] != 1; N++)
	{ //Dec a Binario
		A[N + 1] = A[N] / 2;
		A2[N] = A[N] % 2;

		if (A[N + 1] == 1)
			A2[N + 1] = 1;
	}
	cout << "El primer digito es:  " << endl;
	for (N = 0; N < n; N++) //Invertir
		A2[N + 1] = A2[8 - N - 1];

	for (N = 7; N >= 0; N--)
	{
		cout << A2[N];
	}
	cout << endl;

	int V;

	cout << "El segundo digito es: " << endl;

	for (V = 0; B[V] != 1; V++)
	{ //Dec a Binario
		B[V + 1] = B[V] / 2;
		B2[V] = B[V] % 2;

		if (B[V + 1] == 1)
			B2[V + 1] = 1;
	}

	for (V = 0; V < n; V++) //Invertir
		B2[V + 1] = B2[8 - V - 1];

	for (V = 7; V >= 0; V--)
	{
		cout << B2[V];
	}
}

void sumaBinaria()
{
	int v = 9, V, acarreo[9], total[9];
	for (int N = 0; N < v; N++)
	{
		A2[0] = 0;
		B2[0] = 0;
		acarreo[0] = 0;
		total[0] = 0;
		acarreo[N + 1] = 0;
		total[N + 1] = 0;
	}

	for (int N1 = v; N1 >= 0; N1--)
	{
		int aux;
		aux = (A2[N1] + B2[N1] + acarreo[N1]);
		total[N1] = aux;
		if (aux == 2)
		{
			acarreo[N1] = 1;
			total[N1] = 0;
		}
		else
		{
			if (aux == 3)
			{
				acarreo[N1 + 1] = 1;
				total[N1] = 1;
			}
		}
	}

	cout << "La suma total de los numeros binarios es: " << endl;
	for (int N = 0; N < n; N++) //Invertir
		total[N + 1] = total[8 - N - 1];

	for (int V1 = 7; V1 >= 0; V1--)
	{
		cout << total[V1];
	}
	cout << endl;
}