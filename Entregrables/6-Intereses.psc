//un inversionista desea colocar un capital c en una entidad bancaria que le ofrece una tasa de interés nominal anual "I" durante N años. El banco utiliza un sistema de capitalización de los intereses así:
//1. Mensual
//2. Trimestral
//3. Semestral
//4. Anual
//Plantear un algoritmo en pseint y un programa dev c/c++ que determine el valor futuro (VF) de la inversión, sabiendo que:

//VF =C*(1+i)^N
//Donde i=I/p
//p=numero de periodos capitalizables en un año
//n=numeros de periodos capitalizables durante toda la inversión

//El programa debe mostrar C, I, N, i, n, VF

//i=tasa de interes efectiva capitalizable por cada periodo de tiempo (lo que le paga el banco)

algoritmo Interes_Efectivo
definir C, I, N, op, p, n Como Numerico
definir i, VF como real

//escribir "Bienvenido a una de las ramas denuestro programa financiero DoMoney. A continuación vamos a calcular de su mano. Le vamos a evaluar el valor a futuro de el capital que desease invertir solicitandole los parámetros necesarios basicos.";
Escribir "¿Cuanto capital desea invertir?";
Leer C;
Escribir "¿Que tasa de interés nominal anual le ofrecieron?";
Leer I;
Escribir "¿En cuanto tiempo desea retirar su dinero? (en años)";
Leer N;

Escribir "¿Que sistema de capitalización desea usar? ";
Escribir "1. Mensual";
Escribir "2. Trimestral";
Escribir "3. Semestral";
Escribir "4. Anual";
Leer op;

Segun op Hacer

Caso 1:
p<-12;
n<-N*p;
Caso 2: 
p<-4;
n<-N*12/p;
Caso 3:
p<-2;
n<-N*12/p;
Caso 4:
p<-1;
n<-N;
De Otro Modo:
Escribir "Ingreso una opcion incorrecta";
Escribir "Presione enter para continuar";
FinSegun

i<-(I/100)/p;
VF<-(C*(1+i)^n);
i<-i*100;

Limpiar Pantalla;
Escribir "Si su capital es de $ ",C, " con una tasa de interes nominal anual de ", I," % durante ",N," años:";
//escribir "Se puede obtener que: ";

Escribir "La tasa de interes efectiva capitalizable por cada periodo de tiempo seria: ", i, "%";

Si n=1 Entonces
Escribir " Hay un periodo capitalizable";
SiNo
Escribir "Los periodos capitalizables son: ", n;
FinSi

Escribir "El valor futuro del capital seria: $ ", VF;


//escribir " Gracias por preferirnos.";
//escribir "No olvide, no hay nadie mejor que DoMoney";
//Escribir "Sus ganacias son: ",VF-C;

FinAlgoritmo


