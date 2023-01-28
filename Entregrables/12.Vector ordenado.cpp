#include<iostream>

using namespace std;

int main(){
	int n= 10, i;
	int A[n];

	
	while (i < n)//entran datos
	{
		cout << "Digite un número entero en A[" << i << "]: " ;
		cin >> A[i];
		i++;
	}
	
	for (i=0 ; i <= n; i++)//muestra vector
	{
		cout << A[i] << "    ";
	}
	
	int j,aux;
	
	for(i=0;i<n;i++){//metodo burbuja
		for(j=0;j<n-1;j++){
			if(A[j] > A[j+1]){
				aux = A[j];
				A[j] = A[j+1];
				A[j+1] = aux;
			}
		}
	}
	
	cout<<"\nNumeros de forma Ascendente: ";
	for(i=0;i<n;i++){
		cout<<A[i]<<" ";
	}
	
	cout<<"\nNumeros de forma Descendente: ";
	for(i=n-1;i>=0;i--){
		cout<<A[i]<<" ";
	}
	
	return 0;
}