#include <stdio.h>
#include "Funciones.h"

int main()
{
    int x,i;
    float resultado;
    char cadena[] ={"254343.26211"};
    char *p;
    p = cadena;
    x = (int)sizeof(cadena) - 1;

    resultado = parteentera(p);
    resultado +=  partedecimal(p,x);

    printf("%f",resultado);
}



