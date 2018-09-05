#include <stdio.h>
#include <stdlib.h>
#define CANT 999

int main()
{
    int legajo[CANT],aux,i,j;
    for(i=0;i<CANT-1;i++)
    {
        for(j=i+1;j<CANT;j++)
        {
            if(legajo[i]>legajo[j]
            {
                aux=legajo[i];
                legajo[i]=legajo[j];
                legajo[j]=aux;
            }
        }
    }//ver carpeta
    return 0;
}
