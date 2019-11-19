//
// Created by diego on 17/11/2019.
//
#include <stdio.h>
#include <stdlib.h>
#include "Funciones.h"

int main()
{
    int i;
    char **p = (char**) malloc(CANT * sizeof(char*));

    for(i=0;i<CANT;i++)
    {
        p[i] = (char*) malloc(81 * sizeof(char));
    }

    introducir(p);
    mayor(p);


    for(i=0;i<CANT;i++)
    {
        puts(p[i]);
    }
}