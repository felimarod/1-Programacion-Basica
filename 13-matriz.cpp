/*Planear un programa que permita definir dos matrices A y B de tamaño [N] por [N] con casos numéricos enteros y que permita calcular y mostrar:
C= A+B
D= A-B
E= A*B
F= A^(-1) método de Gauss Jordan
El tamaño de todas las matrices generadas
*/

#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#define MAX 10
int N, i, j, A[MAX][MAX], B[MAX][MAX], C[MAX][MAX], D[MAX][MAX], E[MAX][MAX];
using namespace std;

void LeerMatrizA(), LeerMatrizB(), mostrarA(), mostrarB(), mostrarC(), mostrarD(), mostrarE(), mostrarF();

int main()
{
	int v;
	do
	{
		do
		{
			system("cls");
			cout << "Digite el tamaño de las matrices A[] y B[], recuerde que van a ser cuadradas, por lo cual solo le pedimos un valor." << endl;
			cout << "/n NOTA: El numero ingresado debe ser mayor que 2 y menor o igual que " << MAX << " Si no lo es, se te pedira que ingreses otro digito. Hasta que cumpla con los parametros." << endl;
			cin >> N;
		} while (N > MAX || N < 2);

		LeerMatrizA();
		LeerMatrizB();

		system("cls");
		//mostrarA();
		//mostrarB();
		mostrarC();
		mostrarD();
		mostrarE();
		//mostrarF();

		cout << "\nEl tamaño de las matrices es " << N << ", " << N << endl;

		cout << "\n¿Desea repetir el proceso?\nSI=0     NO=1" << endl;
		cin >> v;
	} while (v == 0);
	return 0;
}
void LeerMatrizA()
{
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < N; j++)
		{
			cout << "A[" << i << "][" << j << "]: ";
			cin >> A[i][j]; // leer matriz A posicion a posicion
		}
	}
}
void LeerMatrizB()
{
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < N; j++)
		{
			cout << "B[" << i << "][" << j << "]: ";
			cin >> B[i][j]; // leer matriz B posicion a posicion
		}
	}
}
void mostrarA() // mostrar matriz A
{
	cout << "\nMatriz A " << endl;
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < N; j++)
		{
			cout << A[i][j] << "  ";
		}
		cout << endl;
	}
}
void mostrarB() // mostrar matriz B
{
	cout << "\nMatriz B " << endl;
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < N; j++)
		{
			cout << B[i][j] << "  ";
		}
		cout << endl;
	}
}
void mostrarC() // calcular y mostrar matriz C
{
	cout << "\nMatriz C = A + B " << endl;
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < N; j++)
		{
			C[i][j] = A[i][j] + B[i][j];
			cout << C[i][j] << "  ";
		}
		cout << endl;
	}
}
void mostrarD() // calcular y mostrar matriz D
{
	cout << "\nMatriz D = A - B " << endl;
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < N; j++)
		{
			D[i][j] = A[i][j] - B[i][j];
			cout << D[i][j] << "  ";
		}
		cout << endl;
	}
}
void mostrarE() // calcular y mostrar matriz E
{
	cout << "\nMatriz E = A * B " << endl;
	int aux, k;
	for (i = 0; i < N; i++)
	{
		for (k = 0; k < N; k++)
		{
			for (j = 0, aux = 0; j < N; j++)
			{
				aux = aux + A[i][j] * B[j][k];
			}
			E[i][j] = aux;
			cout << E[i][j] << "  ";
		}
		cout << endl;
	}
}
void mostrarF() // calcular y mostrar matriz inversa
{
	//    cout << "\nMatriz F = A ^ (-1) " << endl;
	double matriz[MAX][MAX];
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < N; j++)
		{
			A[i][j] = matriz[i][j];
		}
		cout << endl;
	}
	double identidad[MAX][MAX];

	int k, y, z = 0;
	double factor;
	int control = 0;
	int control2 = 0;
	double vec[MAX];

	void ceros_arriba(int i, int j, int N, double(*matriz)[MAX], double(*identidad)[MAX]);
	void ceros_abajo(int i, int j, int N, double(*matriz)[MAX], double(*identidad)[MAX]);

	for (i = 0; i < N; i++)
	{ /*generar la matriz identidad*/
		for (j = 0; j < N; j++)
		{
			if (i == j)
				identidad[i][j] = 1; /*si coinciden i y j se pone a 1*/
			else
				identidad[i][j] = 0;
		}
	}
	printf("\nIdentidad\n");
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < N; j++)
		{
			printf(" %.1lf", identidad[i][j]);
			if (j == N - 1)
				printf("\n");
		}
	}

	j = 1;
	while (matriz[0][0] == 0)
	{ /*escalonamos la matriz (ponemos las filas que empiezan por 0 abajo*/

		for (i = 0; i < N; i++)
		{
			vec[i] = matriz[0][i];
			matriz[0][i] = matriz[j][i];
			matriz[j][i] = vec[i];
		}
		printf("\nescalonar\n");
		for (y = 0; y < N; y++)
		{
			for (z = 0; z < N; z++)
			{
				printf(" %.1lf", matriz[y][z]);
				if (z == N - 1)
					printf("\n");
			}
		}
		j++;
	}

	for (i = 0; i < N; i++)
	{ /*recorre filas*/
		control = 0;
		j = 0;
		while (control == 0)
		{ /*recorre columnas*/
			if (matriz[i][j] != 0)
			{ /*busca pivote (elemento distinto de 0)*/
				if (matriz[i][j] != 1)
				{
					factor = pow(matriz[i][j], -1); /*si pivote no es 1, se lo multiplica y se pone a 1*/
					for (k = 0; k < N; k++)
					{
						matriz[i][k] = (matriz[i][k]) * factor;
						identidad[i][k] = (identidad[i][k]) * factor;
					}
				}

				ceros_arriba(i, j, N, matriz, identidad); /* se hacen 0's por arriba*/
				ceros_abajo(i, j, N, matriz, identidad);  /* y por debajo del pivote*/
				control = 1;
			}
			j++;
		}
	}
	/* Una vez terminada esta operacion, la matriz identidad estara
transformada en la inversa
Ahora se comprueba que la matriz original este transformada
en la matriz identidad, de no ser asi la inversa obtenida
no es valida y la matriz no tiena inversa */

	for (i = 0; i < N; i++)
	{
		for (j = 0; j < N; j++)
		{
			if (i == j)
			{
				if (matriz[i][j] != 1)
					control2 = 1;
			}
			else
			{
				if (matriz[i][j] != 0)
					control2 = 1;
			}
		}
	}

	if (control2 == 1)
	{
		printf("\nLa matriz no tiene inversa\n");
	}
	else
	{
		printf("\nLa Matriz Inversa es \n");
		for (i = 0; i < N; i++)
		{
			for (j = 0; j < N; j++)
			{
				cout << identidad[i][j] << "   ";
			}
			cout << "\n";
		}
	}
} /*main*/

void ceros_arriba(int i, int j, int N, double (*matriz)[MAX], double (*identidad)[MAX])
{
	/*pre: recibe el pivote de la matriz a tratar y las matrices matriz y identidad
post: hace ceros por arriba a las dos matrices*/

	int k, l;
	double factor = 0;

	for (k = 0; k < i; k++)
	{
		factor = matriz[k][j] * -1; /*saca el factor para poner a 0 porque pivote siempre es 1*/
		for (l = 0; l < N; l++)
		{
			matriz[k][l] = (matriz[k][l]) + matriz[i][l] * factor; /*suma la fila del pivote multiplicada por el factor a la fila de arriba*/
			identidad[k][l] = (identidad[k][l]) + identidad[i][l] * factor;
		}
	}
}

void ceros_abajo(int i, int j, int N, double (*matriz)[MAX], double (*identidad)[MAX])
{
	/*pre: recibe el pivote de la matriz a tratar y las matrices matriz y identidad
post: hace ceros por abajo a las dos matrices*/
	int k, l;
	double factor = 0;

	for (k = N - 1; k > i; k--)
	{
		factor = matriz[k][j] * -1; /*saca el factor para poner a 0 porque pivote siempre es 1*/
		for (l = 0; l < N; l++)
		{
			matriz[k][l] = (matriz[k][l]) + matriz[i][l] * factor; /*suma la fila del pivote multiplicada por el factor a la fila de abajo*/
			identidad[k][l] = (identidad[k][l]) + identidad[i][l] * factor;
		}
	}
}