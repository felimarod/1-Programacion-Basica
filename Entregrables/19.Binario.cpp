#include <iostream>
#define nbits 8
#define MIN 0
#define MAX 255

using namespace std;

int main()
{
	int A, B, i, NUM1[nbits], NUM2[nbits], ACARREO[nbits], sum, SUM[nbits+1];
	
	cout << "\nINGRESE VALORES ENTRE " << MIN << " Y " <<MAX<<endl;
	do
	{
		cout << "\nINGRESE LA VARIABLE A: ";
		cin >> A;
	} while (A < MIN || A > MAX);

	do
	{
		cout << "\nINGRESE LA VARIABLE B: ";
		cin >> B;
	} while (B < MIN || B > MAX);

	cout << "\n" << A << " + " << B << " = " << A + B << endl;

	i = nbits - 1; //pasar A a binario
	while (A != 0)
	{
		NUM1[i] = (A) % (2);
		A = A / 2;
		i--;
	}

	i = nbits - 1; //pasar B a binario
	while (B != 0)
	{
		NUM2[i] = (B) % (2);
		B = B / 2;
		i--;
	}

	for (i = nbits-1; i >= 0; i--) // hacer SUMA en binario
	{
		sum = NUM1[i] + NUM2[i] + ACARREO[i];
		switch (sum)
		{
		case 0:
			SUM[i] = 0;
			break;

		case 1:
			SUM[i] = 1;
			break;

		case 2:
			SUM[i] = 0;
			ACARREO[i - 1] = 1;
			break;

		case 3:
			SUM[i] = 1;
			ACARREO[i - 1] = 1;
			break;
		}
	}
	
	cout << endl;
	cout <<  "\t";
	for (i = 0; i < nbits; i++) // mostrar A en binario
	{
		cout << NUM1[i] << "\t";
	}
	cout << endl;
	cout <<  "\t";
	for (i = 0; i < nbits; i++) // mostrar B en binario
	{
		cout << NUM2[i] << "\t";
	}
	cout << endl;
	cout<<"------------------------------------------------------------------"<<endl;
	for (i = 0; i < nbits+1; i++) // mostrar SUMA en binario
	{
		cout << SUM[i] << "\t";
	}
	return 0;
}