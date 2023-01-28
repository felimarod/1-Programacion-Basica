//Un ingeniero tiene el problema de determinar la altura (h), que se genera por la caída de dos varillas (a) y (b) de longitud conocida en centímetros, al caer de forma accidental a lo profundo de un pozo.
//La longitud de la base del piso (base) también es conocida en centímetros.

//El programa debe utilizar una función llamada altura () el cual determine dicha altura(h)

//El programa de mostrar: a, b, base y h

#include <iostream>
#include <math.h>

double altura(double, double, double);

using namespace std;

int main()
{
	double a, b, base;
	cout << "Digite cuanto mide la base del pozo en centimetros" << endl;
	cin >> base;
	cout << "Digite cuanto mide la primer varilla en centimetros" << endl;
	cin >> a;
	cout << "Digite cuanto mide la segunda varilla en centimetros" << endl;
	cin >> b;

	if (base < a && base < b)
	{
		altura(a, b, base);
		cout << "Si las varillas miden " << a << " y " << b << ". Y la longitud de la base es " << base << endl;
		cout << "La altura de la interseccion de ambas varillas (en centimetros) es: " << altura(a, b, base) << endl;
	}
	else
	{
		cout << "La longitud de la base del pozo debe ser menor que las varillas." << endl;
	}

	return 0;
}
double altura(double x, double y, double z)
{
	double pi, C, D, B, d, h;

	C = acos(z / x);
	D = acos(z / y);

	pi = 3.1415967;
	B = pi - C - D;

	d = (sin(D) * z) / sin(B);

	h = (sin(C) * d) / sin(pi / 2);

	return h;
}