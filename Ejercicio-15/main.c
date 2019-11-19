//
// Created by diego on 17/11/2019.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "Funciones.h"
#define X 5
#define Y 5

int main()
{
    int i,j;
    int **p =(int**) malloc(Y * sizeof(int*));
    srand(time(NULL));

    for(i=0;i<Y;i++)
    {
        p[i] =(int*) malloc(X * sizeof(int));
    }

    simetrica(p,X,Y);

    for(i=0;i < Y;i++)
    {
        for(j=0;j<X;j++)
        {
            printf("%d  ",p[i][j]);
        }
        printf("\n");
    }
}
