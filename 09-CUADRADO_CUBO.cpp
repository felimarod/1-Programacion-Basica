//plantear un algoritmo que mediante dos funciones llamadas cuadrado y cubo determine el cuadrado y el cubo de los valores numericos enteros del 1 al 100

#include <iostream>

int cuadrado(int); //prototipo función 1
int cubo(int);	 //prototipo función 2

using namespace std;

int main()
{
	
	for (int i = 1; i <= 100; i++)
	{
		cout << "El cuadrado de " << i << " es: " << cuadrado(i) << endl;
		cout << "El cubo de " << i << " es: " << cubo(i) << endl;
	}
	return 0;
}

int cuadrado(int x)
{
	int c = x * x; //valor local función 1
	return c;
}

int cubo(int y)
{
	int d = y * y * y; //valor local función 2
	return d;
}