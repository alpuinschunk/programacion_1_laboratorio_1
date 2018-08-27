#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero1, numero2;
    float producto, cuadrado;


    printf("Ingrese primer numero\n");
    scanf("%d",numero1);
    printf("Ingrese segundo numero\n");
    scanf("%d",numero2);

    if(numero1!=0||numero2!=0)
    {
        producto=(float)(numero1*numero2);

        printf("El producto de los numeros es: %f\n",producto);

        cuadrado=(float)numero1^2;
        printf("El cuadrado del primer numero es: %f\n",cuadrado);
    }

    system("cls");
    return 0;
}
