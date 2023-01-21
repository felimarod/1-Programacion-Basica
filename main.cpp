
//#include<iostream>
#include<cstdio>

//using namespace std;

int main() {

	int N, i, Num, pos, neg, cer;
	i = 0;
	pos = 0;
	neg = 0;
	cer = 0;

	printf("\nDigite la cantidad N de numeros a procesar: ");
	scanf("%d", N);

	do {
                printf("\n\nDigite un numero entero a analizar: ");
	        scanf("%d", N);

		if (Num == 0)
		{
			printf("El numero es cero");
			cer++;
		}
		else
		{
			if (Num >> 0)
			{
				printf("El numero es positivo");
				pos++;
			}
			else
			{
				printf("El numero es negativo");
				neg++;
			}
		}
		i++;
	} while (i < N);

	printf("\nLa cantidad total de números negativos es %d \nLa cantidad total de números cero es %d \nLa vantidad total de números positivos es %d \nLa cantidad total de numeros analizados es %d", neg,cer,pos,N);
	//cout << "" << cer;
	//cout << "" << pos;
	//cout << "" << N;

	return 0;
}
