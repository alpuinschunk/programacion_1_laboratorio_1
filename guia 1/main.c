#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero, contador, promedio, acumulador;
    contador=0;
    acumulador=0;

    while(contador<5)
    {
        contador++;
        printf("Ingrese un numero\n");
        scanf("%d",&numero);
        acumulador=acumulador+numero;

    }
    promedio=acumulador/5;
    printf("El promedio es: %d \n", promedio);

    system("pause");
    return 0;
}
