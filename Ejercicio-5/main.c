//
// Created by diego on 15/11/2019.
//
#include <stdio.h>
#include "Funciones.h"

int main()
{
    char n[] =  {"7364678393525325392035295"};
    char n2[] = {"1674033096929473859689548"};
    int x,x2,i;
    x = (int)sizeof(n) - 1;x2 = (int)sizeof(n2) - 1;
    char n3[x];
    char *nn1,*nn2,*nn3;
    nn1 = n;nn2 = n2;nn3 = n3;

    for(i=0;i <= x;i++)
    {
        nn3[x-i] = sumar(nn1+x-i,nn2+x2-i);
    }

    for(i=0;i<x;i++)
    {
        printf("%c ",nn1[i]);
    }

    printf("\n\n");

    for(i=0;i < x2;i++)
    {
        printf("%c ",nn2[i]);
    }

    printf("\n\n");

    for(i=0;i<x;i++)
    {
        printf("%c ",nn3[i]);
    }
}
