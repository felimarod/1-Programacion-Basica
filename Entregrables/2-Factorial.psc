//Plantear un algoritmo y un programa en dev c/c++ que dado un valor numérico entero N
//Debe mostrar N y factorial(N)
Algoritmo factorial
Definir fac, i, n Como Entero

fac<-1;
i<-1;

Escribir "Ingrese el numero a calcular factorial";
Leer n;

Si n>=0;
Entonces
      Para i<-1 Hasta n Hacer
      
         fac<-fac*i;
      FinPara;
   Escribir "El valor de ",n," factorial es ", fac;

SiNo
         Escribir "No existe factorial para un numero                            negativo.";
 
FinSi

FinAlgoritmo
