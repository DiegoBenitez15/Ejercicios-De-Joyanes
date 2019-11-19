//
// Created by diego on 16/11/2019.
//

#include "Funciones.h"
#include <stdlib.h>
#include <stdio.h>

NUMLARGO leer(NUMLARGO *x)
{
    int i;
    x->n_digitos = 0;
    x->digitos = (char*) malloc(200 * sizeof(char));
    fflush(stdin);
    gets(x->digitos);

    for(i = 0;i > -1;i++)
    {
        if(x->digitos[i] == '\0')
        {
            break;
        }

        x->n_digitos += 1;
    }

    x->digitos = (char*) realloc(x->digitos,x->n_digitos * sizeof(char));
    return *x;
}

NUMLARGO suma(NUMLARGO a,NUMLARGO b,NUMLARGO result)
{
    int x;
    x = (a.digitos[a.n_digitos-1] - '0') + (b.digitos[b.n_digitos-1] - '0');

    if(a.n_digitos-1 < 0 && b.n_digitos-1 < 0)
    {
        return result;
    }
    else if(b.n_digitos-1 < 0)
    {
        if(a.digitos[a.n_digitos-1] > 9)
        {
            result.digitos[result.n_digitos-1] = (char)(a.digitos[a.n_digitos-1]-10);
            a.n_digitos -= 1;
            result.n_digitos -= 1;

            return suma(a,b,result);
        }
        else
        {
            result.digitos[result.n_digitos-1] = a.digitos[a.n_digitos-1];
            a.n_digitos -= 1;
            result.n_digitos -= 1;

            return suma(a,b,result);
        }
    }
    else if(x > 9)
    {
        result.digitos[result.n_digitos-1] = (char)((char)(x-10) + '0');
        a.digitos[a.n_digitos-2] = (char)((int)(a.digitos[a.n_digitos-2]) + 1);
        a.n_digitos -= 1;
        b.n_digitos -= 1;
        result.n_digitos -= 1;

        return suma(a,b,result);
    }
    else
    {
        result.digitos[result.n_digitos-1] = (char)((char)x + '0');
        a.n_digitos -= 1;
        b.n_digitos -= 1;
        result.n_digitos -= 1;

        return suma(a,b,result);
    }

    return result;
}