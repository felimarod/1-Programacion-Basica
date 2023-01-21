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
		cout << "Si las varillas miden " << a << "cm y " << b << "cm. Y la longitud de la base es " << base << "cm." << endl;
		cout << "La altura de la interseccion de ambas varillas seria a " << altura(a, b, base) << " centimetros de altura con respecto a la base del pozo." << endl;
	}
	else
	{
		cout << "La longitud de la base del pozo debe ser menor que las varillas." << endl;
	}
	return 0;
}
double altura(double x, double y, double z)
{
	double C, D, pi, B, d, h;
	C = acos(z / x);
	D = acos(z / y);
	B = 3.1415967 - C - D;
	d = (sin(D) * z) / sin(B);
	h = (sin(C) * d);//divide sobre seno de 90 que es 1, por lo cual nl lo puse
	return h;
}