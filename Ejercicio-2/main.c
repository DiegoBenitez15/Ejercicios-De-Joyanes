//
// Created by diego on 15/11/2019.
//

#include <stdio.h>
#include "Funciones.h"
#define X 3
#define Y 3

int main()
{
    int i,j,c;
    int *p[Y];
    int  matriz[][X] ={-8 , -1 , 3,
                       -1 ,  7 , 4,
                        3 ,  4 , 9 };

    for(i = 0;i < Y;i++)
    {
        p[i] = matriz[i];
    }

    c = Simetrica(p,X,Y);

    for(i = 0;i < Y;i++)
    {
        for(j = 0;j < X;j++)
        {
            printf("%d ",p[i][j]);
        }
        printf("\n");
    }

    if(c == 0)
    {
        printf("\nEs simetrico");
    }
    else
    {
        printf("\nNo es simetrico");
    }
}