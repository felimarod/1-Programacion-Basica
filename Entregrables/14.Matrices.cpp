/*Planear un programa que permita definir dos matrices A y B de tamaño [N] por [N] con casos numéricos enteros y que permita calcular y mostrar:
C= A+B
D= A-B
E= A*B
F= A^(-1) método de Gauss Jordan
El tamaño de todas las matrices generadas
*/

#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#define MAX 10
int N, i, j, A[MAX][MAX], B[MAX][MAX], C[MAX][MAX], D[MAX][MAX], E[MAX][MAX];
using namespace std;

void LeerMatrizA(), LeerMatrizB(), mostrarA(), mostrarB(), mostrarC(), mostrarD(), mostrarE(), mostrarF();

int main()
{
    int v;
    do
    {
        do
        {
            system("cls");
            cout << "\nDigite el tamaño de las matrices A[] y B[], recuerde que van a ser cuadradas, por lo cual solo le pedimos un valor." << endl;
            cout << "\n NOTA: El numero ingresado debe ser igual o mayor que 2 y menor o igual que " << MAX << ". Si no lo es, se te pedira que ingreses otro digito. Hasta que cumpla con los parametros." << endl;
            cin >> N;
        } while (N > MAX || N < 2);

        LeerMatrizA();
        LeerMatrizB();

        system("cls");
        mostrarA();
        mostrarB();
        mostrarC();
        mostrarD();
        mostrarE();
        //mostrarF();

        cout << "\nEl tamaño de las matrices es " << N << ", " << N << endl;

        cout << "\n¿Desea repetir el proceso?\nSI=0     NO=1" << endl;
        cin >> v;
    } while (v == 0);
    return 0;
}
void LeerMatrizA()
{
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            cout << "A[" << i << "][" << j << "]: ";
            cin >> A[i][j]; // leer matriz A posicion a posicion
        }
    }
}
void LeerMatrizB()
{
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            cout << "B[" << i << "][" << j << "]: ";
            cin >> B[i][j]; // leer matriz B posicion a posicion
        }
    }
}
void mostrarA() // mostrar matriz A
{
    cout << "Matriz A " << endl;
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            cout << A[i][j] << "  ";
        }
        cout << endl;
    }
}
void mostrarB() // mostrar matriz B
{
    cout << "\nMatriz B " << endl;
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            cout << B[i][j] << "  ";
        }
        cout << endl;
    }
}
void mostrarC() // calcular y mostrar matriz C
{
    cout << "\nMatriz C = A + B " << endl;
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            C[i][j] = A[i][j] + B[i][j];
            cout << C[i][j] << "  ";
        }
        cout << endl;
    }
}
void mostrarD() // calcular y mostrar matriz D
{
    cout << "\nMatriz D = A - B " << endl;
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            D[i][j] = A[i][j] - B[i][j];
            cout << D[i][j] << "  ";
        }
        cout << endl;
    }
}
void mostrarE() // calcular y mostrar matriz E
{
    cout << "\nMatriz E = A * B " << endl;
    int aux, k;
    for (i = 0; i < N; i++)
    {
        for (k = 0; k < N; k++)
        {
            for (j = 0, aux = 0; j < N; j++)
            {
                aux = aux + A[i][j] * B[j][k];
            }
            E[i][j] = aux;
            cout << E[i][j] << "  ";
        }
        cout << endl;
    }
}
void mostrarF() // calcular y mostrar matriz inversa
{
}