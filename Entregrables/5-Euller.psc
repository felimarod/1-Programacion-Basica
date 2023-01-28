//Ejercicio 5
//Plantear un algoritmo en pseint y un programa en c/c++ que dado el n-simo termino del caculo del valor aproximado de la constante de Euler(e), determine el valor aproximado de la constante, en su definicion como una serie. El programa debe mostrar: N y e

Proceso Serie_Euller
Definir i, n, fac Como Numerico
Definir sum, num1, num2 Como Real

fac<-1;
num1<-1;
num2<-0;

//Escribir "e es aproximadamente 1/n";
//Escribir "Teniendo en cuenta lo anterior";
Escribir "Digite la posición en la serie de Euler que desea conocer";
Leer n;
escribir "  .  ";
Escribir "La serie hasta la posicion ", n, " es:";
i<-0;

Repetir
//Para i<-0 Hasta n-1 Hacer

Si i=0
Entonces
fac<-1;
SiNo
fac<-fac*i;
FinSi

num1<-(1/fac);
sum<-num1+num2;
num1<-num2;
num2<-sum;
i<-i+1;
Escribir "La posicion #",i," es aproximadamente ",sum;
//finpara;

Hasta Que  i=n;

FinProceso
