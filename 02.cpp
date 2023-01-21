#include <iostream>
using namespace std;

int main()
{
	int fac, n;

	fac = 1;

	cout << "Ingrese el numero a calcular factorial: ";
	cin >> n;

	if (n >= 0)
	{
		for (int i = 1; i < n; i++)
		{
			fac = fac *i;
		};
		cout << "\nEl valor de " << n << " factorial es "<<fac;
	}
	else
	{
		cout << "\nNo existe factorial para un numero negativo.";
	}
	return 0;
}