#include <iostream>
#include <string.h>
#include <locale.h>
#include <stdlib.h>
using namespace std;
int main()
{
    setlocale(LC_ALL, "");        //compatibilidad con tildes
    int n = 10, VV;                //Declaramos variables
    char palindromo_capicua[n]; //Array
    
    cout << ".:Programa para determinar palíndromos capicúa:." << endl;
    cout << "\nDigite la palabra a analizar: ";
    cin.getline(palindromo_capicua, n + 1, '\n'); //Entrada de datos. Si se leen mas de 10 caracteres, se toman los primeros 10. Cada caracter toma una posicion en el arreglo, empezando en 0, array[i]
    cout << "\nNOTA 1: Si ingresa mas de 10 caracteres, se tienen en cuenta los primeros 10 caracteres." << endl;
    n = strlen(palindromo_capicua); //Nos da la CANTIDAD de caracteres ingresados en el arreglo
    switch (n) //En función de n se comparan los extremos del array y se asigna un valor de verdad (VV)
    {
    case 1:
        cout << "\nSolo digitaste un carácter." << endl;
        return 0;
    case 2:
        if (palindromo_capicua[0] <= 64 || palindromo_capicua[1] <= 64)
        {
            VV = 0;
        }
        else
        {
            if (palindromo_capicua[0] == palindromo_capicua[1])
            {
                VV = 1;
            }
            else
            {
                VV = 2;
            }
        }
        break;
    case 3:
        if (palindromo_capicua[0] <= 64 || palindromo_capicua[1] <= 64 || palindromo_capicua[2] <= 64)
        {
            VV = 0;
        }
        else
        {
            if (palindromo_capicua[0] == palindromo_capicua[2])
            {
                VV = 1;
            }
            else
            {
                VV = 2;
            }
        }
        break;
    case 4:
        if (palindromo_capicua[0] <= 64 || palindromo_capicua[1] <= 64 || palindromo_capicua[2] <= 64 || palindromo_capicua[3] <= 64)
        {
            VV = 0;
        }
        else
        {
            if (palindromo_capicua[0] == palindromo_capicua[3] && palindromo_capicua[1] == palindromo_capicua[2])
            {
                VV = 1;
            }
            else
            {
                VV = 2;
            }
        }
        break;
    case 5:
        if (palindromo_capicua[0] <= 64 || palindromo_capicua[1] <= 64 || palindromo_capicua[2] <= 64 || palindromo_capicua[3] <= 64 || palindromo_capicua[4] <= 64)
        {
            VV = 0;
        }
        else
        {
            if (palindromo_capicua[0] == palindromo_capicua[4] && palindromo_capicua[1] == palindromo_capicua[3])
            {
                VV = 1;
            }
            else
            {
                VV = 2;
            }
        }
        break;
    case 6:
        if (palindromo_capicua[0] <= 64 || palindromo_capicua[1] <= 64 || palindromo_capicua[2] <= 64 || palindromo_capicua[3] <= 64 || palindromo_capicua[4] <= 64 || palindromo_capicua[5] <= 64)
        {
            VV = 0;
        }
        else
        {
            if (palindromo_capicua[0] == palindromo_capicua[5] && palindromo_capicua[1] == palindromo_capicua[4] && palindromo_capicua[2] == palindromo_capicua[3])
            {
                VV = 1;
            }
            else
            {
                VV = 2;
            }
        }
        break;
    case 7:
        if (palindromo_capicua[0] <= 64 || palindromo_capicua[1] <= 64 || palindromo_capicua[2] <= 64 || palindromo_capicua[3] <= 64 || palindromo_capicua[4] <= 64 || palindromo_capicua[5] <= 64 || palindromo_capicua[6] <= 64)
        {
            VV = 0;
        }
        else
        {
            if (palindromo_capicua[0] == palindromo_capicua[6] && palindromo_capicua[1] == palindromo_capicua[5] && palindromo_capicua[2] == palindromo_capicua[4])
            {
                VV = 1;
            }
            else
            {
                VV = 2;
            }
        }
        break;
    case 8:
        if (palindromo_capicua[0] <= 64 || palindromo_capicua[1] <= 64 || palindromo_capicua[2] <= 64 || palindromo_capicua[3] <= 64 || palindromo_capicua[4] <= 64 || palindromo_capicua[5] <= 64 || palindromo_capicua[6] <= 64 || palindromo_capicua[7] <= 64)
        {
            VV = 0;
        }
        else
        {
            if (palindromo_capicua[0] == palindromo_capicua[7] && palindromo_capicua[1] == palindromo_capicua[6] && palindromo_capicua[2] == palindromo_capicua[5] && palindromo_capicua[3] == palindromo_capicua[4])
            {
                VV = 1;
            }
            else
            {
                VV = 2;
            }
        }
        break;
    case 9:
        if (palindromo_capicua[0] <= 64 || palindromo_capicua[1] <= 64 || palindromo_capicua[2] <= 64 || palindromo_capicua[3] <= 64 || palindromo_capicua[4] <= 64 || palindromo_capicua[5] <= 64 || palindromo_capicua[6] <= 64 || palindromo_capicua[7] <= 64 || palindromo_capicua[8] <= 64)
        {
            VV = 0;
        }
        else
        {
            if (palindromo_capicua[0] == palindromo_capicua[8] && palindromo_capicua[1] == palindromo_capicua[7] && palindromo_capicua[2] == palindromo_capicua[6] && palindromo_capicua[3] == palindromo_capicua[5])
            {
                VV = 1;
            }
            else
            {
                VV = 2;
            }
        }
        break;
    case 10:
        if (palindromo_capicua[0] <= 64 || palindromo_capicua[1] <= 64 || palindromo_capicua[2] <= 64 || palindromo_capicua[3] <= 64 || palindromo_capicua[4] <= 64 || palindromo_capicua[5] <= 64 || palindromo_capicua[6] <= 64 || palindromo_capicua[7] <= 64 || palindromo_capicua[8] <= 64 || palindromo_capicua[9] <= 64)
        {
            VV = 0;
        }
        else
        {
            if (palindromo_capicua[0] == palindromo_capicua[9] && palindromo_capicua[1] == palindromo_capicua[8] && palindromo_capicua[2] == palindromo_capicua[7] && palindromo_capicua[3] == palindromo_capicua[6] && palindromo_capicua[4] == palindromo_capicua[5])
            {
                VV = 1;
            }
            else
            {
                VV = 2;
            }
        }
        break;
    }
    switch (VV) //VV significa Valor de verdad, si cumple con los patametros de su caso será 1, si no, es 0 o 2.
    {
    case 0:
        cout << "\nSe encontraron espacios o numeros, por lo cual no es un palindrómo." << endl;
        break;
    case 1:
        cout << "\n"<< palindromo_capicua << " es capicúa." << endl;
        break;
    case 2:
        cout << "\n"<< palindromo_capicua << " NO es capicúa." << endl;
        break;
    }
    return 0;
}