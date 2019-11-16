//
// Created by diego on 16/11/2019.
//
#include "Funciones.h"
#include <stdio.h>

int main()
{
    char formas[] = {'C','T','N','P','S'};
    float (*f[])(float,float,float) = {cuadrado,triangulor,trianguloi,trapecio,circulo};
    int i;
    char forma;
    float x,x2,x3,resultado;

    printf("\nIngresa primero la forma a calcular seguida de de los tres valos|C 1 2 3|\n");
    printf("\n|C| Cuadrado\n|T| Triangulo Rectangulo\n|N|Triangulo Isoceles\n|P|Trapecio\n|S|Circulo\n");
    printf("\nSeleccionar: ");
    scanf("%c %f %f %f",&forma,&x,&x2,&x3);

    for(i = 0; i < 5;i++)
    {
        if(forma == formas[i])
        {
            resultado = f[i](x,x2,x3);
            printf("El resultado es igual a: %.2f",resultado);
            break;
        }
    }
}