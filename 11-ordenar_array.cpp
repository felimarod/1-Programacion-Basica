#include <iostream>

using namespace std;

int main()
{
	int n = 10;
	int A[n];
	int i, j, aux;

	for (i=0;i < n; i++)
	{
		cout << "Digite un número entero en A[" << i << "]" << endl;
		cin >> A[i];
	}
	cout << "\nLos datos registrados son: ";
	for (i=0; i < n ; i++)
	{
		cout << A[i] << "  ";
	}

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n - 1; j++)
		{
			if (A[j] > A[j + 1])
			{
				aux = A[j];
				A[j] = A[j + 1];
				A[j + 1] = aux;
			}
		}
	}

	cout << "\nNumeros de forma Ascendente: ";
	for (i = 0; i < n; i++)
	{
		cout << A[i] << " ";
	}

	cout << "\nNumeros de forma Descendente: ";
	for (i = n - 1; i >= 0; i--)
	{
		cout << A[i] << "  ";
	}

	return 0;
}