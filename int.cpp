#include <iostream>
#include <stdio.h>

using namespace std;
int orientacionbot(int bot)
{
	switch (bot)
	{
	case 0:
		return 79; //Oeste

	case 90:
		return 78; //Norte

	case 180:
		return 69; //Este

	case 270:
		return 83; //Sur
		break;
	}
}
int main()
{
	int vacio = 32, mina = 43, rastro = 126, posfinal = 64, explosion = 157, m, n, f, c, ff, cf, ins, ori, matriz[100][100];
	char orion, aux, Cuadro[100][100], instru[40];

	FILE *p;

	p = fopen("2.txt", "r+");

	if (p == NULL)
	{
		printf("El archivo no pudo abrirse\n");
		exit(1);
	}
	while (!(feof(p)))
	{
		fscanf(p, "%i", &m); //Filas de la matriz
		fscanf(p, "%i", &n); //Columnas de la matriz

		for (int i = 1; i <= m; i++)	 //Inicia en 1, hasta m
			for (int j = 1; j <= n; j++) //Inicia en 1, hasta n
				fscanf(p, "%i", &matriz[i][j]);

		/*Posicion inicial*/
		fscanf(p, "%i", &f); //Fila inicial
		fscanf(p, "%i", &c); //Columna inicial

		/*Posicion final*/
		fscanf(p, "%i", &ff); //Fila final
		fscanf(p, "%i", &cf); //Columna final

		fscanf(p, "%c", &orion);

		fscanf(p, "%i", &ins); //

		for (int i = 1; i <= ins; i++)
			{
				fscanf(p, "%c", &aux);
				fscanf(p, "%c", &instru[i]);
			}
	}

	fclose(p);

	for (int i = 1; i <= m; i++)	 //Inicia en 1, hasta m
		for (int j = 1; j <= n; j++) //Inicia en 1, hasta n
			if (matriz[i][j] == 1)
				Cuadro[i][j] = mina;
			else
				Cuadro[i][j] = vacio;

	Cuadro[f][c] = orion;
	Cuadro[ff][cf] = posfinal;
	/*orientacion inicial, pasa a numero(representado en grados)*/
	switch (orion)
	{
	case 79: //O-este
		ori = 0;
		break;
	case 78: //N-orte
		ori = 90;
		break;
	case 69: //E-ste
		ori = 180;
		break;
	case 83: //S-ur
		ori = 270;
		break;
	}

	cout << "\n\t\tMatriz inicial\n";
	for (int i = 1; i <= m; i++)
	{
		cout << "\n\t|";
		for (int j = 1; j <= n; j++)
			cout << Cuadro[i][j] << "|";
	}
	cout << "\n";
	cout << "\n";

	for (int i = 1; i <= ins; i++)
	{
		cout << "\n\tInstruccion " << i << ": " << instru[i] << endl;
		switch (instru[i])
		{
		case 68: //D-erecha
			ori = ori + 90;
			if (ori == 360)
				ori = 0;
			break;
		case 73: //I-zquierda
			if (ori == 0)
				ori = 360;
			ori = ori - 90;
			break;
		case 65: //A-vanza
			Cuadro[f][c] = rastro;
			switch (ori) //dependidendo de la oritentacion, avanza
			{
			case 0: //Avanza hacia el Oeste
				if (c - 1 < 1 || Cuadro[f][c - 1] == mina)
				{
					Cuadro[f][c] = explosion;
					for (int i = 1; i <= m; i++)
					{
						cout << "\n\t|";
						for (int j = 1; j <= n; j++)
							cout << Cuadro[i][j] << "|";
					}
					cout << "\n";
					FILE *p;

					if ((p = fopen("3.txt", "w+")) == NULL)
					{
						printf("El archivo no pudo abrirse\n");
						exit(1);
					}
					fprintf(p, "E");
					fclose(p);

					exit(1);
				}

				c--;
				break;
			case 90: //Avanza hacia el Norte
				if (f - 1 < 1 || Cuadro[f - 1][c] == mina)
				{
					Cuadro[f][c] = explosion;

					for (int i = 1; i <= m; i++)
					{
						cout << "\n\t|";
						for (int j = 1; j <= n; j++)
							cout << Cuadro[i][j] << "|";
					}
					cout << "\n";
					FILE *p;

					if ((p = fopen("3.txt", "w+")) == NULL)
					{
						printf("El archivo no pudo abrirse\n");
						exit(1);
					}
					fprintf(p, "E");
					fclose(p);

					exit(1);
				}
				f--;
				break;
			case 180: //Avanza hacia el Este
				if (c + 1 > n || Cuadro[f][c + 1] == mina)
				{
					Cuadro[f][c] = explosion;

					for (int i = 1; i <= m; i++)
					{
						cout << "\n\t|";
						for (int j = 1; j <= n; j++)
							cout << Cuadro[i][j] << "|";
					}
					cout << "\n";
					FILE *p;

					if ((p = fopen("3.txt", "w+")) == NULL)
					{
						printf("El archivo no pudo abrirse\n");
						exit(1);
					}
					fprintf(p, "E");
					fclose(p);

					exit(1);
				}

				c++;
				break;
			case 270: //Avanza hacia el Sur
				if (f + 1 > m || Cuadro[f + 1][c] == mina)
				{
					Cuadro[f][c] = explosion;

					for (int i = 1; i <= m; i++)
					{
						cout << "\n\t|";
						for (int j = 1; j <= n; j++)
							cout << Cuadro[i][j] << "|";
					}
					cout << "\n";
					FILE *p;

					if ((p = fopen("3.txt", "w+")) == NULL)
					{
						printf("El archivo no pudo abrirse\n");
						exit(1);
					}
					fprintf(p, "E");
					fclose(p);

					exit(1);
				}

				f++;
				break;
			}
			break;
		}
aux=orientacionbot(ori);
		Cuadro[f][c] = aux; //Pone la letra de orientacion, en la casilla que se encuentre
		if (i == ins && f == ff && c == cf)
			Cuadro[f][c] = 67; //coloca una C indicando que el procedimiento ha sido correcto
		else
			Cuadro[f][c] = 69; //coloca una E indicando qie ha habido un error
		for (int i = 1; i <= m; i++)
		{
			cout << "\n\t|";
			for (int j = 1; j <= n; j++)
				cout << Cuadro[i][j] << "|";
		}
		cout << "\n";
	}

	if (f == ff && c == cf && f != 0 && c != 0)
	{
		FILE *p;

		if ((p = fopen("3.txt", "w+")) == NULL)
		{
			printf("El archivo no pudo abrirse\n");
			exit(1);
		}
		fprintf(p, "C");
		fclose(p);
		exit(1);
	}
	else
	{
		if ((p = fopen("3.txt", "w+")) == NULL)
		{
			printf("El archivo no pudo abrirse\n");
			exit(1);
		}
		fprintf(p, "E");
		fclose(p);

		exit(1);
	}
}