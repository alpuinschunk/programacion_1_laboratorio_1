#include <stdio.h>
#include <stdlib.h>
#include "persona.h"

void init(EPersona lista[], int len){
    int i;
    for(i=0; i<len; i++)
    {
        lista[i].isEmpty = 1;
    }
}

int obtenerEspacioLibre(EPersona lista[], int len){
    int i;
    int retorno = -1;

    for(i=0; i<len; i++){
        if(lista[i].isEmpty == 1){
            retorno = i;
            break;
        }
    }
    return retorno;
}

void alta(EPersona lista[], int len){
    int index;

    index = obtenerEspacioLibre(lista, len);

    if(index != -1)
    {
            printf("Ingrese apellido: \n");//hay espacio libre
            fflush(stdin);
            gets(lista[index].apellido);

            printf("Ingrese nombre: \n");
            fflush(stdin);
            gets(lista[index].nombre);

            printf("Ingrese su DNI: \n");
            scanf("%ld",&lista[index].dni);

            printf("Ingrese el dia en que nacio: \n");
            scanf("%d",&lista[index].feNac.dia);

            printf("Ingrese el mes en que nacio: \n");
            scanf("%d",&lista[index].feNac.mes);

            printf("Ingrese el año en que nacio: \n");
            scanf("%d",&lista[index].feNac.anio);

            lista[index].isEmpty=0;

            system("cls");
    }
    else
    {
        printf("No hay espacio libre\n\n");//no hay espacio libre
    }

    return;
}
