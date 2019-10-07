/******************************************************************************

Datos de entrada
Entero: edad
 
proceso
escribir ingrese la edad
 leer edad
 si edad>=18
     Escribir Mayor de edad
 sino
     Escribirmenor de edad
 
 salida
 
 mayor de edad o menor de edad


*******************************************************************************/
#include <stdio.h>

void main()
{
    int edad;
    char nombre[10];
    printf("Ingrese su nombre:");
    scanf("%s",nombre);
    printf("Ingrese su edad:");
    scanf("%d",&edad);
    if(edad>=18)
    printf("Es mayor de edad:");
    else
    printf("Es menor de edad");

}

