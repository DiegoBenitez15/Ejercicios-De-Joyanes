//
// Created by diego on 15/11/2019.
//

#include <math.h>
#include <stdio.h>

double f(const double *p)
{
    return 3 * exp(*p) - 2 * (*p);
}

double g(const double *p)
{
    return -(*p) * sin(*p) + 1.5;
}

double z(const double *p)
{
    return pow(*p,3) - 2 * (*p) + 1;
}

void evaluar(double *p,double (*funcion)(const double *p))
{
    int i;
    double c;
    i = 0;
    c = 0;

    while(c < 3.5)
    {
        printf("\nValor %.2lf = %.2lf",c,funcion(p + i));
        i++;
        c += (double)0.2;
    }
}
