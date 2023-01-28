//Plantear un algoritmo y programa en dev c/c++ que nos de la n-sima posición en la serie de Fibonacci
Algoritmo Fibonacci
 Definir num1, num2, fib, N, i Como Entero;

num1<-0;
num2<-1;
Escribir "¿Que posicion en la susecion de fibonacci desea observar?";
Leer N;
Limpiar Pantalla;
Escribir "La sucesión hasta la posicion ", N ," es: ";

Para i<-1 Hasta N Hacer
Escribir i, ". ", num1;
fib<-num1+num2;
num1<-num2;
num2<-fib;
Finpara;

FinAlgoritmo
