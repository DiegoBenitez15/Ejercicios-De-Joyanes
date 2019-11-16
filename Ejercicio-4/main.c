//
// Created by diego on 15/11/2019.
//

#include "Funciones.h"

int main()
{
    int i;
    double c, numeros[18], *p;
    p = numeros;
    c = 0;
    i = 0;

    while(c < 3.5)
    {
        p[i] = c;

        c += (double)0.2;
        i++;
    }

    printf("\nValores de f(x)\n");
    evaluar(p,f);

    printf("\nValores de g(x)\n");
    evaluar(p,g);


    printf("\nValores de z(x)\n");
    evaluar(p,z);
}
