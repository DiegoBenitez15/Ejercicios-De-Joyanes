//
// Created by diego on 17/11/2019.
//

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "Funciones.h"

void introducir(char **p)
{
    int i;

    for(i=0;i<CANT;i++)
    {
        gets(p[i]);
    }
}

void mayor(char **p)
{
    int i,j;
    char *aux = (char*) malloc(81 * sizeof(char));

    for(i=0;i<CANT;i++)
    {
        for(j=i+1;j<CANT;j++)
        {
            if(*p[j] == '\0')
            {
                break;
            }
            else if(strlen(p[i]) < strlen(p[j]))
            {
                aux = p[i];
                p[i] = p[j];
                p[j] = aux;
            }
        }
    }
}