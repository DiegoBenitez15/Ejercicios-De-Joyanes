#include <stdlib.h>

void simetrica(int **p,int x,int y)
{
    int i,j,k,c;
    i = 0;j= 0;

    while(i < y && j < x)
    {
        for(k = 0;k < x;k++)
        {
            c = rand() % 10;
            p[k][j] = c;
            p[i][k] = c;
        }

        i++;
        j++;
    }
}