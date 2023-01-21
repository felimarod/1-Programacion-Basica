//F= A^(-1) método de Gauss Jordan
//#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#define MAX 50

/*Matriz inversa por el metodo Gauss-Jordan*/

/*Francisco Cobos Loriente*/

/*Programacion, Ejercicios3, Ejercicio nº18*/

int main()
{
	double matriz[MAX][MAX];
	double identidad[MAX][MAX];

	int N; /*tamano de la matriz cuadrada*/
	int i, j, k, y, z = 0;
	double factor;
	int control = 0;
	int control2 = 0;
	double vec[MAX];

	void ceros_arriba(int i, int j, int N, double(*matriz)[MAX], double(*identidad)[MAX]);
	void ceros_abajo(int i, int j, int N, double(*matriz)[MAX], double(*identidad)[MAX]);

	char *salir[] = {"0"};
	char sa[10];
	while (strcasecmp(sa, salir[0]) != 0)
	{
		system("cls");

		do
		{
			printf("Ingresa el tamano de la matriz : ");
			scanf("%d", &N);
			system("cls");
		} while (N > 50 || N < 2);
		printf("\nIngrese los valores de matriz\n");

		for (i = 0; i < N; i++)
		{ /*generar matriz*/

			for (j = 0; j < N; j++)
			{
				scanf("%lf", &matriz[i][j]);
			}
		}

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

		printf("\nmatriz\n"); /*mostrar array*/
		for (i = 0; i < N; i++)
		{
			for (j = 0; j < N; j++)
			{
				printf(" %.1lf", matriz[i][j]);
				if (j == N - 1)
					printf("\n");
			}
		}
		printf("\nIdentidad\n", factor);
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
			printf("\nescalonar\n", factor);
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
					printf("%.1lf ", identidad[i][j]);
					if (j == N - 1)
						printf("\n");
				}
			}
		}
		printf("\n...0 para salir 1 continuar\n");
		scanf("%s", sa);
	}
	return 0;
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