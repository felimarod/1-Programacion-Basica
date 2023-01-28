#include <iostream>
using namespace std;
int main()
{
	int i, n;
	double fac, sum, num1, num2;

	fac = 1;
	num1 = 1;
	num2 = 0;

	cout << "Digite la posición en la serie de Euler que desea conocer " << endl;
	cin >> n;
	cout << "\nLa serie hasta la posicion " << n << " es: " << endl;
	i = 0;

	do
	{
		if (i == 0)
			fac = 1;
		else
			fac = fac * i;
		

		num1 = (1 / fac);
		sum = num1 + num2;
		num1 = num2;
		num2 = sum;
		i++;
		cout << "\nLa posicion #" << i << " es aproximadamente " << sum;

	} while (i != n);
	return 0;
}