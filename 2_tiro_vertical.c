/**
 * Escribir un programa que acepte tres argumentos de tipo double:
 * y0, v0 y t. Imprimir el resultado de y0 + v0t - 1/2gt^2.
 * O sea la ecuación de desplazamiento para un tiro vertical
 * después de t segundos, con posición inicial y0 y velocidad inicial v0.
 */
 #include <stdio.h>
 #include <stdlib.h>
 #include <math.h>

#define g 9.8

int main(int argc, char *argv[]) {
  double y0 = atof(argv[1]);
  double v0 = atof(argv[2]);
  double t = atof(argv[3]);
  double a = v0 * t;
  double b = t * t;
  double c = g / 2;
  double d = y0 + a + c;
  double resultado = y0 + v0 * t - c * b;
  // printf("%f + %f * %f - %f * %f = %.2f\n",y0,v0,t,c,b,resultado);
  printf("%.2f\n", resultado);
  return 0;

}
