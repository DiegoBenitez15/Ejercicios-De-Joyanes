//
// Created by diego on 16/11/2019.
//

#include "Funciones.h"
#include <stdio.h>

void introducir(PACIENTE *p)
{
    printf("\nIntroducir el nombre del paciente: ");
    gets(p->nombre);

    printf("\nIntroducir la direccion del paciente: ");
    gets(p->direccion);

    printf("\nIntroduzca la fecha de nacimiento del paciente: ");
    gets(p->fecha);

    printf("\nIntroduce el genero del paciente: ");
    p->sexo = getchar();

    printf("\nIntroduce el dia de visita del paciente");
    fflush(stdin);
    gets(p->diasdevisitas);

    printf("\nIntroduzca el Problema Medico del paciente: ");
    gets(p->pm);
}

int diasdevisitas(PACIENTE *p,char dia[])
{
    int i,c;
    c = 0;

    for(i = 0;i>-1;i++)
    {
        if(p->diasdevisitas[i] == '\0')
        {
            c = 1;
            break;
        }
        else if(p->diasdevisitas[i] != dia[i])
        {
            break;
        }
    }

    return c;
}