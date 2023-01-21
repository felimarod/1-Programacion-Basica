//Un inversionista desea colocar un capital (C) en una entidad bancaria, que le ofrece una tasa de interés anual (I) durante (n) años. Plantear un programa en Devc/c++ (análisis del problema y código en C que mediante una función llamada valorfinal() determine el valor final de la inversión para este inversionista. El programa debe mostrar: C, I, n, Valor final)

//El cálculo se realiza con interés compuesto

//nota: No se puede utilizar la fórmula del cálculo del valor futuro de una inversión

#include <iostream>
int C, n, I;
float ValorFinal(int, int, int);
using namespace std;
int main()
{
	cout << "Digite la cantidad del capital a invertir" << endl;
	cin >> C;
	cout << "Digite la cantidad del interés anual en porcentaje" << endl;
	cin >> I;
	cout << "Digite la cantidad de tiempo que desea que su capital se encuentre en la entidad bancaria (En años)" << endl;
	cin >> n;
	ValorFinal(C, I, n);
	cout << "Si ingresa " << C << " capital. La tasa de interes es " << I << ". Durante " << n << " año(s)" << endl;
	cout << "El valor final de la inversion es: " << ValorFinal(C, I, n) << endl;

	return 0;
}
float ValorFinal(int a, int b, int c)
{
	float VF = a;
	
	for (int i = 1; i <= c; i++)
	{
		VF = (VF/100) * (100 + b);
	}
	return VF;
}