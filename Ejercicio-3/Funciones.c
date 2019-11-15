//
// Created by diego on 15/11/2019.
//

#include "Funciones.h"
#include <stdio.h>
#include <math.h>

void introducir(NADADOR *p)
{
    printf("\nIntroducir el Nombre: ");
    fflush(stdin);
    gets(p->nombre);
    printf("\nIntroduce la Edad: ");
    fflush(stdin);
    scanf(" %d",&p->edad);
    printf("\nIntroducir Nombre de la Prueba: ");
    fflush(stdin);
    gets(p->Prueba);
    printf("\nIntroducir tiempo |180m 36s|: ");
    fflush(stdin);
    scanf(" %dm %ds",&p->t.minutos,&p->t.segundos);
}

float tiempo(NADADOR *p)
{
    while(p->t.segundos > 60)
    {
        p->t.segundos -= 60;
        p->t.minutos += 1;
    }

    return (float)p->t.minutos + ((float)p->t.segundos /100);
}


float promedio(NADADOR *p)
{
    int i;
    float suma = 0;

    for(i = 0;i < NADADORES;i++)
    {
        suma += tiempo(p + i);
    }

    return suma / NADADORES;
}

float desvest(float promedio,NADADOR *p)
{
    float suma;
    int i;
    suma = 0;

    for(i = 0;i < NADADORES;i++)
    {
        suma += powf(tiempo(p+i) - promedio,2);
    }

    return suma / NADADORES;
}
