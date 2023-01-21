#include <iostream>
using namespace std;

long int Factorial_Recursivo(long int);
int main()
{
	long int n;
	cout << "Ingrese el numero a hallar el factorial: ";
	cin >> n;
	
	cout << "\nPara " << n << " el factorial es: " << Factorial_Recursivo(n);

	return 0;
}
long int Factorial_Recursivo(long int fact)
{
	if (fact == 0)
	{
		return 1;
	}
	else
	{
		return (fact * Factorial_Recursivo(fact - 1));
	}
}