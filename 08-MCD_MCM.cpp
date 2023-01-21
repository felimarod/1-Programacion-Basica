#include <iostream>

int mcd(int, int, int);
int mcm(int, int, int);

using namespace std;

int main()
{
	cout << "A continuacion digite tres valores numericos enteros positivos para hallar el maximo comun divisor y el minimo comun multiplo." << endl;
	cout << "Digite el primer numero:  " << endl;
	int a, b, c;
	cin >> a;
	cout << "Digite el segundo numero:" << endl;
	cin >> b;
	cout << "Digite el tercer numero: " << endl;
	cin >> c;

	if (a <= 0 || b <= 0 || c <= 0)
	{
		cout << "No debes digitar valores negativos, cero o carcateres.";
	}
	else
	{
		cout << "Para " << a << ", " << b << " y " << c << endl;
		mcd(a, b, c);
		cout << "El MCD es : " << mcd(a, b, c) << endl;
		mcm(a, b, c);
		cout << "El MCM es : " << mcm(a, b, c) << endl;
	}
	return 0;
}
int mcd(int x, int y, int z)
{
	int max, i = 1;
	while (i <= x || i <= y || i <= z)
	{
		if (x % i == 0 && y % i == 0 && z % i == 0)
		{
			max = i;
		}

		i++;
	}
	return max;
}

int mcm(int f, int g, int h)
{
		int i = 1, x, x1 = 1, x2 = 1, x3 = 1, min = 1, m;
		do
		{
			do
			{
	
				// Verificar a
				if (f % i == 0)
				{
					f = f / i;
					m = i;
				}
				else
				{
					x1 = 1;
				}
				// Verificar b
				if (g % i == 0)
				{
					g = g / i;
					m = i;
				}
				else
				{
					x2 = 1;
				}
				// Verificar c
				if (h % i == 0)
				{
					h = h / i;
					m = i;
				}
				else
				{
					x3 = 1;
				}
				// Ver.ificar los "x" para salir del ciclo
				x = (x1 + x2 + x3);
				if (x != 3)
				{
					min = (min * m);
				}
			} while (x != 3); // Final iza el ciclo del contador

			i = i + 1; // incrementar contador
			x1 = 0;
			x2 = 0;
			x3 = 0;
		} while (!(f == 1 && g == 1 && h == 1));

	return min;
}