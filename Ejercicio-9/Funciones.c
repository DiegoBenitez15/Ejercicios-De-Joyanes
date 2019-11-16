//
// Created by diego on 16/11/2019.
//

#include "Funciones.h"
#include <math.h>

float cuadrado(float b,float h,float r)
{
    return b * h;
}

float triangulor(float b,float h,float r)
{
    return (b * h) / 2;
}

float trianguloi(float b,float h,float r)
{
    return sqrtf(powf(b,2)- (powf(h,2)/4));
}

float trapecio(float b,float h,float r)
{
    return ((b+h) / 2) * r;
}

float circulo(float b,float h,float r)
{
    return b * powf(h,2);
}


