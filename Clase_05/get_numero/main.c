#include <stdio.h>
#include <stdlib.h>

int utn_getNumero(int* pResultado,char* mensaje,char* mensajeError,int minimo,int maximo,int reintentos);

int main()
{
    int codigo, estado;
    .
    .
    .

    estado=utn_getNumero(&codigo,"Ingrese codigo: ","Error, codigo incorrecto",1,10000,3);

    printf("%d",codigo);
    return 0;
}//ver 4_2 apunte_inputs_1.1 pag 5
