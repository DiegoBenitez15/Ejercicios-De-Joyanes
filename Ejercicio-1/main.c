//
// Created by diego on 16/11/2019.
//

#include <stdio.h>
#include "Funciones.h"

int main()
{
    char cadena[20][80];
    char *p[20],i;

    for(i =0;i < 20;i++)
    {
        p[i] = cadena[i];
    }

    insertaresavaianahi(p);

    for(i =0;i < 20;i++)
    {
        puts(p[i]);
        printf("\n");
    }
}
