//
// Created by diego on 15/11/2019.
//

#include <stdio.h>
#include "Funciones.h"


int main()
{
    int i;
    float prom,desv;
    NADADOR n[NADADORES];
    NADADOR *p;
    p = n;

    for(i =0;i < NADADORES;i++)
    {
        printf("\n|NADADOR %d|\n",i + 1);

        introducir(p + i);
    }

    prom = promedio(p);
    desv = desvest(prom,p);

    for(i = 0;i < NADADORES;i++)
    {
        printf("\n|NADADOR %d|",i + 1);

        printf("\nNombre: %s",p[i].nombre);
        printf("\nEdad: %d anos",p[i].edad);
        printf("\nPrueba: %s",p[i].Prueba);
        printf("\nTiempo: %d min %d seg\n",p[i].t.minutos,p[i].t.segundos);
    }

    printf("\nPROMEDIO: %.2f",prom);
    printf("\nDESVACION ESTANDAR: %.2f",desv);
}