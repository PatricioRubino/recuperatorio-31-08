/**
 * Escribir un programa que acepte dos argumentos: día y mes
 * (ambos de tipo int).
 * Imprimir "verdadero" si la fecha está entre el 20 de marzo
 * y el 20 de junio, o "falso" de lo contrario.
 *
 */
 #include <stdio.h>
 #include <stdlib.h>

 int main(int argc, char *argv[]) {
   int dia = atoi(argv[1]);
   int mes = atoi(argv[2]);
   if(dia == 20 && mes == 3 || (dia == 20 && mes ==6)) {
     printf("verdadero\n",dia,mes );
   }
     else{
       printf("falso\n",dia,mes);
     }

   return 0;

}
