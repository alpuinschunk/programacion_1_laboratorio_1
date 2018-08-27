#include <stdio.h>
#include <stdlib.h>

int main()
{
    //printf("Hello world!\n");
    int nro1,nro2,nro3, menor, mayor;
    printf("Ingrese: ");
    scanf("%d",&nro1);
    printf("\n Ingrese: ");
    scanf("%d", &nro2);
    printf("\n Ingrese: ");
    scanf("%d", &nro3);

    mayor=nro1;
    menor=nro1;

    if(nro2>mayor)
    {
        mayor=nro2;
    }
    else
    {
        menor=nro2;
    }

    if(nro3>mayor)
    {
        mayor=nro3;
    }
    else{
        menor=nro3;
    }

    printf("mayor: %d", mayor);
    printf("\n menor: %d \n", menor);

    system("Pause");
    return 0;
}
