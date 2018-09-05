#include <stdio.h>
#include <stdlib.h>
#define CANT 999

int main()
{
    int legajo[CANT], legajoAux, i, flag;
    flag=0;
    printf("Ingrese legajo a buscar\n");
    scanf("%d",&legajoAux);

    for(i=0;i<CANT;i++)
    {
        if(legajoAux==legajo[i])
        {
            printf("Dato encontrado");
            flag=1;
            break;///rompe el for para que no siga buscando en los demas lagajos
        }
    }

    if(flag==0)
    {
        printf("No encontrado");
    }

    return 0;
}
