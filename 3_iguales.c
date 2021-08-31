/**
 * Escribir un programa que acepte tres argumentos enteros
 * e imprima "iguales" si los tres números son iguales o
 * "no iguales" de lo contrario.
 *
 */
 #include <stdio.h>
 #include <stdlib.h>

int main(int argc, char *argv[]) {
  int a = atoi(argv[1]);
  int b = atoi(argv[2]);
  int c = atoi(argv[3]);

  if(a!=b && b!=c) {
  printf("no iguales\n",a,b,c);
} else {
  printf("iguales\n",a,b,c );
}

  return 0;
}
