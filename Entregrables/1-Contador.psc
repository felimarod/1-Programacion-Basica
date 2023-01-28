//Dada una cantidad N de datos numericos enteros determine cuántos son POSITIVOS, NEGATIVOS o CERO

algoritmo Contador

 definir N, i, Num, pos, neg, cer, como entero;
i <-0;
pos <-0;
neg <-0;
cer <-0;

escribir "Digite la cantidad N de numeros a procesar";
leer N;

mientras i<N Hacer
   escribir "Digite un numero entero a analizar";
   leer Num;

      si Num=0;
         entonces
         escribir "El numero es cero";
         cer <- cer+1; 
      sino;
         si Num>0;
         entonces
         escribir: "El numero es positivo";
         pos <- pos+1;
         sino
         escribir "El numero es negativo";
         neg <- neg+1;
         finsi
   finsi
   i<-i+1;
finmientras

escribir "La cantidad total de números negativos es ", neg;
escribir "La cantidad total de números cero es ", cer;
escribir "La vantidad total de números positivos es ", pos;
escribir "La cantidad total de numeros analizados es ", N;

finalgoritmo
