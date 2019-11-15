//
// Created by diego on 15/11/2019.
//

#ifndef PORTAFOLIO_2_FUNCIONES_H
#define PORTAFOLIO_2_FUNCIONES_H

#define NADADORES 2

typedef struct tiempo
{
    int minutos;
    int segundos;
}TIEMPO;

typedef struct nadador
{
    char nombre[30];
    int edad;
    char Prueba[30];
    TIEMPO t;
}NADADOR;

void introducir(NADADOR *p);
float promedio(NADADOR *p);
float desvest(float promedio,NADADOR *p);

#endif //PORTAFOLIO_2_FUNCIONES_H
