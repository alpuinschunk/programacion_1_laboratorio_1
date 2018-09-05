#include <stdio.h>
#include <stdlib.h>
#define CANT 50;
int main()
{
    int legajo[CANT];
    float salario[CANT];
    int i;

    for(i=0;i<CANT;i++)
    {
        printf("legajo: ");
        scanf("%d",&legajo[i]);
        printf("salario: ");
        scanf("%f",&salario[i]);
    }

    printf("legajo\tSalario\n");

    for(i=0;i<CANT;i++)
    {
        printf("legajo: %d\tsalario:%.2f\n",legajo[i],salario[i]);
    }
    /*int nro;
    nro=5;
    nro=7;

    int nros[5];
    nros[0]=3;
    nros[2]=7;

    printf("Ingrese: ")
    scanf("%d",&nros[1]);
    //o
    printf("%d",nros[1]);*/
    return 0;
}
