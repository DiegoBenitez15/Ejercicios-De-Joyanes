//
// Created by diego on 16/11/2019.
//

#include "Funciones.h"

int separar(int *p[])
{
    int *n = p[0];
    int *n2 = p[1];

    return sumar(n,n2);
}

int sumar(int *p,int *p2)
{
    int i,suma;
    suma = 0;

    for(i = 0;i < X;i++)
    {
        suma += multiplicar(p+i,p2+i);
    }

    return suma;
}

int multiplicar(const int *p, const int *p2)
{
    return (*p) * (*p2);
}