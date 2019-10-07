#include <stdio.h>
 
float aCenti();
float aFaren();
 
int main() {
 
  aCenti();
  aFaren();
 
  return 0;
}
 
//Funciones
float aCenti() {
  float F,C,grados;
 
  printf("Ingrese la temperatura deseada en grados centigrados:");
  scanf("%f",&grados);
 
  F = grados * 1.80 + 32;
 
  printf("%4.2f grados Centigrados equivalen a %4.2f grados Farenheit\n",grados,F);
}
 
float aFaren() {
  float F,C,grados;
 
  printf("Ingrese la temperatura deseada en grados Farenheit:");
  scanf("%f",&grados);
 
  C = (grados -32) / 1.80;
 
  printf("%4.2f grados Farenheit equivalen a %4.2f grados Centigrados\n",grados,C);
}