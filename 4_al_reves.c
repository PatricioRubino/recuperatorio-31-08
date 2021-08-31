/**
 * Escribir un programa que acepte como argumento un número entero
 * e imprima el número con los digitos al revés.
 * Por ejemplo para la entrada 12345 debe imprimir 54321.
 *
 */
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]) {
  for(int n = 12345;n<=5;n--) {
    if(n=n-1) {
      printf("%d\n",n );
    }
  }
return 0;
}
