#include <stdio.h>
#include <stdlib.h>
#include "persona.h"

#define CANT 1

int main()
{
    char seguir='s';
    int opcion=0;
    EPersona personas[CANT];

    init(personas, CANT);

    do{
        system("cls");
        printf("--MENU--\n\n");
        printf("1- ALTAS. Agregar persona\n");
        printf("2- BAJAS. Borrar persona\n");
        printf("3- MODIFICACIONES. Modificar persona\n");
        printf("4- LISTAR. Imprimir lista ordenada por apellido y nombre\n");
        printf("5- Salir\n\n");

        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1:
                alta(personas, CANT);
                break;
            case 2:
                break;
            case 3:
                break;
            case 4:
                break;
            case 5:
                seguir = 'n';
                break;
        }
    }while(seguir == 's');

    return 0;
}
