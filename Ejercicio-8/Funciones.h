//
// Created by diego on 16/11/2019.
//

#ifndef PORTAFOLIO_2_FUNCIONES_H
#define PORTAFOLIO_2_FUNCIONES_H

typedef struct paciente
{
    char nombre[30];
    char direccion[80];
    char fecha[10];
    char diasdevisitas[20];
    char sexo;
    char pm[30];
}PACIENTE;

void introducir(PACIENTE *p);
int diasdevisitas(PACIENTE *p,char dia[]);

#endif //PORTAFOLIO_2_FUNCIONES_H
