#include <iostream>
using namespace std;
int main()
{
	int num1, num2, fib, N, i;

	num1 = 0;
	num2 = 1;
	cout << "¿Que posicion en la susecion de fibonacci desea observar?\t";
	cin >> N;

	cout << "La sucesión hasta la posicion " << N << " es: " << endl;

	for (i = 1; i < N; i++)
	{
		cout << i << ". " << num1 << endl;
		fib = num1 + num2;
		num1 = num2;
		num2 = fib;
	};
	return 0;
}