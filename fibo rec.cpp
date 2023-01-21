#include <iostream>
int fibo[200];
using namespace std;
int fiborecursivo(int posicion)
{
	int aux;
	if (posicion == 0)
	{
		aux = 0;
		fibo[0] = aux;
		return aux;
	}
	if (posicion == 1)
	{
		aux = 1;
		fibo[1] = aux;
		return aux;
	}
	if (posicion >> 1)
	{
		aux = fiborecursivo(posicion - 1) + fiborecursivo(posicion - 2);
		fibo[posicion] = aux;
		return aux;
	}
}
int main()
{
	int posicion;
	cout << endl;
	cout << "Ingrese la posicion a evaluar de la serie Fibonacci: " << endl;
	cin >> posicion;
	
	fiborecursivo(posicion);
	
	for (int i = 0; i <= posicion; i++)
	{
		cout << "Fibonacci [" << i << "]:" << fibo[i] << endl;
	}
	return 0;
}