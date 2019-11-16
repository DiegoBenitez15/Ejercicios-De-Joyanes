//
// Created by diego on 16/11/2019.
//

#include <stdio.h>
#include "Funciones.h"
#define CANTIDAD 2

int main()
{
    int i;
    char fecha[10];
    PACIENTE pac[CANTIDAD];
    PACIENTE *p;
    p = pac;

    for(i=0;i<CANTIDAD;i++)
    {
        introducir(p+i);
    }

    printf("Dia de visitas: ");
    gets(fecha);

    for(i=0;i<CANTIDAD;i++)
    {
        int c = 0;

        c = diasdevisitas(p+i,fecha);

        if(c == 1)
        {
            printf("\nPaciente: %s\nDia de Visita: %s\n\n",(p+i)->nombre,(p+i)->diasdevisitas);
        }
    }
}