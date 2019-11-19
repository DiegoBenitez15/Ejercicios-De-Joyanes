//
// Created by diego on 16/11/2019.
//
#include <stdio.h>
#include <stdlib.h>
#include "Funciones.h"

int main()
{
    NUMLARGO n[3];
    NUMLARGO *p;
    int i;
    p = n;

    for(i=0;i < 2;i++)
    {
        printf("|Introduce el %d Numero|",i+1);
        p[i] = leer(p+i);
    }

    p[2].n_digitos = p[0].n_digitos;
    p[2].digitos = (char*) malloc((p[2].n_digitos - 1) * sizeof(char));

    suma(p[0],p[1],p[2]);

    printf("\n%s",p[2].digitos);
}

