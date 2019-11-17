//
// Created by diego on 16/11/2019.
//

#include <stdio.h>
#include <stdlib.h>
#include "Funciones.h"

void introducir(char *p)
{
    int i;
    gets(p);

    for(i=0;i > -1;i++)
    {
        if(p[i] == '\0')
        {
            break;
        }
    }

    p = (char*) realloc (p,i * sizeof(char));
}

void eliminarblancos(char *p)
{
    int i,c;
    c = 0;

    for(i=0;i > -1;i++)
    {
        if(p[i] == '\0')
        {
            break;
        }
        else if(p[i] == ' ')
        {
            organizar(p,i);
            c++;
        }
    }

    p = (char*) realloc(p,i-c * sizeof(char));
}

void organizar(char *p,int c)
{
    int i;
    char aux;

    for(i = c;i > -1;i++)
    {
        if(p[i+1] == '\0')
        {
            break;
        }
        else
        {
            aux = p[i];
            p[i] = p[i + 1];
            p[i + 1] = aux;
        }
    }
}