//
// Created by diego on 15/11/2019.
//

int* Traspuesta(int *p[],int *temp[],int x,int y)
{
    int i,j;

    for(i =0;i < x;i++)
    {
        for(j = 0;j < y;j++)
        {
            temp[j][i] = p[i][j];
        }
    }

    return *temp;
}

int Simetrica(int *p[],int x,int y)
{

    int i,j;
    int matriz[x][y];
    int *temp[y];

    for(i = 0;i < y;i++)
    {
        temp[i] = matriz[i];
    }

    Traspuesta(p,temp,x,y);

    for(i = 0;i < y;i++)
    {
        for(j = 0;j < x;j++)
        {
            if(p[i][j] != temp[i][j])
            {
                return 1;
            }
        }
    }

    return 0;
}