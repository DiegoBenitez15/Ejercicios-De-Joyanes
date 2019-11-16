//
// Created by diego on 16/11/2019.
//

#include <stdio.h>
#include "Funciones.h"



int main()
{
    int numero[Y][X]={14 , 92 , 31 , 26 , 85,
                      46 , 58 , 16 , 34 , 99,
                      7 , 8 , 9 , 1 , 2,
                      5 , 6 , 1 , 3 , 4};
    int *p[Y],i;

    for(i=0;i < Y;i++)
    {
        p[i] = numero[i];
    }

    printf("La suma es igual a: %d",separar(p));
}
