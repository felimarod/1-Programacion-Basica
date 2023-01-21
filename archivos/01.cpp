#include <stdio.h>

int main()
{
	int cuenta;
	char nombre[30];
	double saldo;
	FILE *p;
	if ((p = fopen("clientes.txt", "w")) == NULL)
	{
		printf("El archivo no pudo abrirse\n");
	}
	else
	{
		printf("Introduzca la cuenta, el nombre y el saldo. \n");
		printf("Introduzca EOF al final de la entrada. \n");
		printf("?");
		scanf("%d%s%lf", &cuenta, nombre, &saldo);
		while (!feof(stdin))
		{
			fprintf(p, "%d %s %.2f\n", cuenta, nombre, saldo);
			printf("Introduzca EOF al final de la entrada. \n");
			printf("?");
			scanf("%d%s%lf", &cuenta, nombre, &saldo);
		}
		fclose(p);
	}

	return 0;
}