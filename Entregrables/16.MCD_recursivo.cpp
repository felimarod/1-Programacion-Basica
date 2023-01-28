#include <iostream>
using namespace std;

int MCD_rec (int a, int b)
{
	if (b==0) return a;
	else MCD_rec (b, a%b);		
}
int main ()
{
	int a, b;
	cout<<"\t\nIngrese dos valores numericos enteros positivos para determinar su Maximo Comun Divisor\n\n";
	
	do{
	cout<< "Ingrese el primer valor numerico: ";
	cin>>a;
	if (a<0) cout<<"Recuerde que es un valor numerico entero positivo: ";
	}while (a<0);
	
	
	do{
	cout<< "Ingrese el segundo valor numerico: ";
	cin>>b;
	if (b<0) cout<<"Recuerde que es un valor numerico entero positivo: ";
	}while (b<0);
	
	
	if (a>b) cout<<"MCD (a,b)= "<<MCD_rec(a,b)<<"\n";
	else (b>a);cout<<"MCD (b,a)="<<MCD_rec(b,a);
	
	return 0;
}
