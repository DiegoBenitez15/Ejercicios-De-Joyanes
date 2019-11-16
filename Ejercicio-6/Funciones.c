#include <math.h>

float parteentera(char *p)
{
    int i,c,x;
    float suma;
    c=0;suma =0;

    for(i = 0; i>-1;i++)
    {
        if(p[i] == '.')
        {
            break;
        }
        c++;
    }

    for(i = 0;i < c;i++)
    {
        x = p[i] - '0';
        suma += (float)(x * pow(10,c-1-i));
    }

    return suma;
}

float partedecimal(char *p,int tamano)
{
    int i,c,x;
    float suma;
    c = 0;suma = 0;

    for(i = 0; i < tamano;i++)
    {
        if(c > 0)
        {
            x = p[i] - '0';
            suma += (float)(x / pow(10,c));
            c++;
        }
        else if(p[i] == '.')
        {
            c++;
        }

    }

    return suma;
}


