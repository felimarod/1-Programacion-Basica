//Plantear un algoritmo en pseint y un programa en dev c/c++ que permita obtener las raices de la solucion de una ecuación cuadrática de la forma:
//ax^2+bx+c=0
//Dados los coeficientes a b y c como enteros; utilizando para ello la formula general:

//x1.2= (-b+-√(b^2-4ac))/(2*(a))

//El algoritmo y programa debe obtener todas las raíces reales y/o complejas

//Debe indicar mediante un mensaje cuando la solución no existe o es indeterminada

//Realizar:
//1.analisis del problema
//2. dfd y pseudocodigo en pseint 
//3. codificacion en dev c/c++

algoritmo ecuacion_cuadratica
 definir a, b, c, raiz, sum1, sum2 como real

Escribir "ax^2+bx+c=0";
Escribir "Teniendo en cuenta la ecuacion anterior.";
Escribir "Por favor digite los valores que le pedimos a continuacion incluyendo el signo que los acompaña a su izquierda.";
Escribir "a";
Leer a;
Escribir "b";
Leer b;
Escribir "c";
Leer c;
Escribir "Si se encuentra una indeterminacion, el resultado es un numero real, complejo o imaginario. Te lo avisaremos";

Si a=0 Entonces
Escribir ".";
Escribir "No se puede realizar la ecuacion ya que al remplazar a en la ecuacion nos da una indeterminacion.";

SiNo
raiz<-b^2+(-4*a*c);

Si raiz<0 Entonces 

Escribir ".";
raiz<-raiz*(-1);
sum1<-(-b)/(2*a);
sum2<-RC(raiz)/(2*a);

Si sum1=0 Entonces
Si sum2=1 Entonces
Escribir "Cuando el valor de a es : ",a;
Escribir "Cuando el valor de b es : ",b;
Escribir "Cuando el valor de c es : ",c;
Escribir "x es un numero imaginario.";
Escribir "El primer valor de x es: i" ;
Escribir "El segundo valor de x es: -i" ;
SiNo
Escribir "Cuando el valor de a es : ",a;
Escribir "Cuando el valor de b es : ",b;
Escribir "Cuando el valor de c es : ",c;
Escribir "x es un numero imaginario.";
Escribir "El primer valor de x es: ",sum2,"i" ;
Escribir "El segundo valor de x es: -", sum2,"i" ;
FinSi
SiNo
Escribir "Cuando el valor de a es : ",a;
Escribir "Cuando el valor de b es : ",b;
Escribir "Cuando el valor de c es : ",c;
Escribir "x es un numero complejo.";
Escribir "El primer valor de x es: ",sum1,"+",sum2,"i" ;
Escribir "El segundo valor de x es: ",sum1,"-", sum2,"i" ;
FinSi


SiNo
sum1<-(-b)/(2*a);
sum2<-RC(raiz)/(2*a);
Escribir "Cuando el valor de a es : ",a;
Escribir "Cuando el valor de b es : ",b;
Escribir "Cuando el valor de c es : ",c;
Escribir "x se encuentra en el conjunto de los enteros.";
Escribir "El primer valor de x es: ", sum1+sum2;
Escribir "El segundo valor de x es: ", sum1-sum2;
FinSi

FinSi

    FinAlgoritmo
