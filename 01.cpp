#include <stdio.h>
#include<iostream>

using namespace std;

int main() {

	int N, i, Num, pos, neg, cer;
	i = 0;
	pos = 0;
	neg = 0;
	cer = 0;

	printf("\nDigite la cantidad N de numeros a procesar: ");
	cin >> N;

	do {
		cout << "\n\nDigite un numero entero a analizar: ";
		cin >> Num;

		if (Num == 0)
		{
			cout << "El numero es cero";
			cer++;
		}
		else
		{
			if (Num >> 0)
			{
				cout << "El numero es positivo";
				pos++;
			}
			else
			{
				cout << "El numero es negativo";
				neg++;
			}
		}
		i++;
	} while (i < N);

	cout << "\nLa cantidad total de numeros negativos es " << neg;
	cout << "\nLa cantidad total de numeros cero es " << cer;
	cout << "\nLa vantidad total de numeros positivos es " << pos;
	cout << "\nLa cantidad total de numeros analizados es " << N;

	return 0;
}
