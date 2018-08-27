#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numeroA, numeroB, suma;

    printf("Ingrese el primer numero\n");
    scanf("%d",&numeroA);
    printf("Ingrese el segundo numero\n");
    scanf("%d",&numeroB);

    suma=numeroA+numeroB;
    printf("La suma es: %d\n",suma);

    system("pause");
    return 0;
}
