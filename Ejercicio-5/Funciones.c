//
// Created by diego on 15/11/2019.
//
char sumar(char *p,const char *p2)
{
    int n,m;
    n = (int)((*p - '0') + (*p2 - '0'));

    if(n > 9)
    {
        *(p-1) = (char)((int)(*(p-1)) + 1);
        n = n - 10;
        return (char)(n + '0');
    }

    return (char)(n + '0');
}