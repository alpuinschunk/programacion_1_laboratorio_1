#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero, contador, menor, mayor;
    contador=0;

    while(contador<3)
    {
        printf("Ingrese un numero: ");
        scanf("%d",&numero);

        if(contador==1)
        {
            menor=numero;
            mayor=numero;
        }
        else
        {
            if(numero>mayor)
            {
                mayor=numero;
            }
            else
            {
                menor=numero;
            }
        }

    }
    printf("mayor: %d", mayor);
    printf("\n menor: %d \n", menor);


    system("Pause");
    return 0;
}
