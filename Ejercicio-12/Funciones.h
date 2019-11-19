//
// Created by diego on 16/11/2019.
//

#ifndef PORTAFOLIO_2_FUNCIONES_H
#define PORTAFOLIO_2_FUNCIONES_H

typedef struct numlargo{
    int n_digitos;
    char * digitos;
}NUMLARGO;

NUMLARGO leer(NUMLARGO *x);
NUMLARGO suma(NUMLARGO a,NUMLARGO b,NUMLARGO result);

#endif //PORTAFOLIO_2_FUNCIONES_H
