#include <stdio.h>
#include <stdlib.h>
//int validarEdadLaboral (int valor);
//int validarRangoEntero (int valor, int lInf, int lSup);
#include "Alpuin.h"
int main()
{
    int edad;

    printf("Ingrese su edad\n");
    scanf("%d",&edad);

    while(!validarRangoEntero(edad, 18, 65))
    {
        printf("Edad invalida. Reingrese edad: \n");
        scanf("%d", &edad);
    }

    printf("Edad valida\n\n");
    system("pause");
    return 0;
}
/*
/** \brief valida si el entero esta dentro del rango
 *
 * \param valor a validar
 * \param limite inferior del rango
 * \param limite superior del rango
 * \return 1 si el parametro esta dentro del rango. 0 si no lo esta.
 *
 */
/*
int validarRangoEntero (int valor, int lInf, int lSup)
{
    int esValido=1;

    if (valor< lInf||valor>lSup)
    {
        esValido=0;
    }
    return esValido;
}*/
 /*int validarEdadLaboral (int valor)
 {

    version1
    int esValido;

    if(valor>65||valor<18)
    {
       es valido=0;
    }
    else
    {
        esValido=1;
    }
    return esValido;


    version2
    int esValido=1;

    if(valor>65||valor<18)
    {
       es valido=0;
    }

    return esValido;

    version3
    return (valor>65||valor<18)

 }*/

