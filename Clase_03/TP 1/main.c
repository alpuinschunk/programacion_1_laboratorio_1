#include <stdio.h>
#include <stdlib.h>

//prototipos (5)
int main()
{
    int opcion; //(menu.. ciclo repetitivo)
    float op1=0, op2=0;
    do
    {
        printf("menu\n");
        printf("\n\n1. ingresar 1er operando (A=%.0f)", op1)
        printf("\n2. ingresar 2do operando (B=%.0f)",op2);
        .
        .
        .
        printf("\n\n seleccione opcion");
        scanf("%d,&opcion");


        switch(opcion)
        {
            case 1:
                -
                break;
            case 2:
                -
                break;
            case 3:
                -//llamo a la funcion
                //division: if(denominador!=0)
                break;
            case 4:
                -
                break;
            case 5:
                -
                break;
            default
                //opcion incorrecta
        }
    }while(opcion!=5);
    return 0;
}
