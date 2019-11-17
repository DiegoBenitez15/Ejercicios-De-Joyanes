//
// Created by diego on 16/11/2019.
//

#include <stdio.h>
#include <stdlib.h>
#include "Funciones.h"



int main()
{
    char **p = (char**) malloc(CANT * sizeof(char*));
    int i;

    for(i=0;i < CANT;i++)
    {
        p[i] = (char*) malloc (100 * sizeof(char));
    }

    for(i=0;i < CANT;i++)
    {
        introducir(p[i]);
        printf("\n%s\n",p[i]);
        eliminarblancos(p[i]);
        printf("\n%s\n",p[i]);
    }
}
