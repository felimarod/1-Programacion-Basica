#include <iostream>
using namespace std;

int main()
{
	int i;
	int A[10];
	for (i = 0; i < 10; i++)
	{
		cout << "Digite un número entero en A[" << i << "]" << endl;
		cin >> A[i];
	}
	i = 0;
	while (i < 10)
	{
		cout << A[i] << " ";
		i++;
	}

	return 0;
}