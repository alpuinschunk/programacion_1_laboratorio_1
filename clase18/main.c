#include <stdio.h>
#include <stdlib.h>

void main (void)
{
    FILE *parch;

    ///Se abre en modo lectura
    if((parch=fopen("banco.dat","rb"))==NULL)
    {
        ///Si el modo anterior dio error el archivo
        if((parch=fopen("banco.dat","wb"))==NULL)
        {
            printf("\nEl archivo no puede ser abierto");
            exit (1);
        }
        ///no existe, por lo tanto se crea
        fclose(parch);
    }
}
