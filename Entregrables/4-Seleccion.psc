//La universidad distrital les ha encomendado la tarea de saber de una cantidad N de aspirantes a conformar su selección de baloncesto pre-juvenil ¿Cuántos y quiénes de los ASPIRANTES son ADMITIDOS, RECHAZADOS y PRESENTADOS?

//La INFORMACIÓN básica de cada aspirante es:

//CODIGO de tipo entero
//NOMBRE de tipo cadena
//PROGRAMA de tipo cadena curricular
//EDAD entero en años
//PESO entero en Kg
//ESTATURA entero en cm
//PROMEDIO acumulado flotante con un dígito significativo

//Plantear un algoritmo en pseint y un programa en dev c/c++ que permita procesar esta información teniendo en cuenta los siguientes REQUISITOS para que un aspirante sea admitido

//EDAD <=18 años
//PESO <=60 kg
//ESTATURA <= 180 cm
//PROMEDIO acumulado>=4.5/5


//El programa debe mostrar la INFORMACIÓN básica de cada uno de los aspirantes admitidos
//el total de aspirantes ADMITIDOS 
//el total de aspirantes RECHAZADOS
//el total de aspirantes PRESENTADOS


//nota: no se pueden utilizar arreglos para este ejercicio

Proceso equipo_de_basketball
Definir i, adm, n, rec, edad, peso, est, falt Como Numerico
   Definir prom Como Real
   Definir nom, prog, cod Como Cadena

i<-0;
adm<-0;
rec<-0;

Escribir "Bienvenido al registro creado para la seleccion del equipo de baloncesto prejuvenil.";
Escribir "¿Cuántos integrantes conformaran el equipo?";
Leer n;
   
//Limpiar pantalla;

Mientras adm<n Hacer
i<-i+1;
Escribir ".";
Escribir "Por favor ingrese los datos del aspitante ", i ," en el siguiente orden:";
Escribir ".";
      Escribir "Nombre completo del aspirante ";
      Leer nom;
      nom<-mayusculas(nom);
      Escribir "Código estudiantil de ",nom;
      Leer cod; 
      Escribir "Programa curricular de ", nom;
      Leer prog; 
      prog<-mayusculas(prog);
      Escribir "Edad (años) de ", nom;
      Leer edad; 
      Escribir "Peso (kg) de ",nom;    
      Leer peso; 
      Escribir "Estatura de ", nom;
      Leer est; 
      Escribir "Promedio academico de ", nom". Por favor escribalo con un decimal";
       Leer prom;

Si edad<=18 Y peso<=60 Y est>=180 Y prom>=4.5 Y prom<=5 Entonces
   
adm<-adm+1;
   Escribir "El aspirante ",i,", llamado ",nom ,", con código ",cod," , perteneciente al programa ",prog," , tiene ",edad," años, pesa ",peso,"kg, mide " ,est,"cm y su promedio academico es  " ,prom," es el admitido ",adm ;
SiNo
   Escribir "El aspirante ", i," no cumple con los requisitos para ingresar en el grupo de baloncesto.";
   rec<-rec+1;
FinSi;

//Esperar 3 Segundos;

falt<-n-adm;
Si falt=0 Entonces        

//Limpiar Pantalla;

Escribir "Los integrantes del equipo y por lo tanto la cantidad de estudiantes admitidos son: ", adm;         
Escribir "El numero total de estudiantes rechazados son: ", rec;         
Escribir "El numero total de estudiantes presentados son: ", i;         

SiNo

Si falt=1
Entonces
Escribir "Falta un integrante para completar el grupo";
SiNo
Escribir "Faltan ",falt," integrantes para completar el grupo.";
FinSi; 
FinSi;

//Esperar 5 Segundos;
  
FinMientras;

FinProceso
