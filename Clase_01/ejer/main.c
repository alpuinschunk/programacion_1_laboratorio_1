#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero, contador;
    char respuesta[2];
    contador=0;

    do
    {
        contador++;
        printf("Ingrese un numero\n");
        scanf("%d\n",&numero);
        printf("¿Desea continuar?");
        scanf("%c\n",&respuesta);

    }while(respuesta=="si");

    system("pause");
    return 0;
}
