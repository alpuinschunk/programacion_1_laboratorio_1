#include <stdio.h>
#include <stdlib.h>
#define CANT 200

//int buscarInt(legajo[],legajoAux);

int main()
{
    char nombre[CANT][31],nombreAux[31];
    char apellido[CANT][31],apellidoAux[31];
    int isEmpty[CANT],isEmptyAux;
    int edad[CANT], edadAux;
    int legajo[CANT],legajoAux;
    int i,j,opcion,flag=0, opcionM;
    char respuesta;


    for(i=0;i<CANT;i++)
    {
        isEmpty[i]=1;
    }

    do
    {
        printf("Menu");
        printf("1. Altas");
        printf("2. Bajas");
        printf("3. Modificaciones");
        printf("4. Listar");
        printf("5. Salir");
        scanf("%d",&opcion);

        switch(opcion)
        {
        case 1://ALTAS

        for(i=0;i<CANT;i++)
        {
            if(isEmpty[i]==1)
            {
                printf("Ingrese su nombre: ");
                fgets(nombre[i],sizeof(nombre),stdin);

                printf("Ingrese su apellido: ");
                fgets(apellido[i],sizeof(apellido),stdin);

                printf("Ingrese su edad: ");
                fgets(edad[i],sizeof(edad),stdin);

                printf("Ingrese su numero de legajo: ");
                fgets(legajo[i],sizeof(legajo),stdin);

                legajo[i]=i+1;//para no repetir legajos
                isEmpty[i]=0;
                break;
            }
        }
        break;
        case 2://BAJAS

            printf("Legajo: ");
            scanf("%d",&legajoAux);
            flag=0;

            for(i=0;i<CANT;i++)
            {
                if(legajoAux==legajo[i]&&isEmpty==0)
                {
                    isEmpty[i]=1;
                    flag=1;
                }
            }
            if(flag==0)
            {
                printf("Dato no encontrado");
            }
            break;

        case 3:
            printf("Legajo: ");
            scanf("d",&legajoAux);
            flag=0;

            for(i=0;i<CANT;i++)
            {
                if(legajoAux==legajo[i])
                {
                    printf("%d %s %s %d",legajo[i],apellido[i],nombre[i],edad[i]);
                    printf("¿Modificar? S/N");
                    fflush(stdin):
                    scanf("%c",&respuesta);//usar toupeer o tlp

                    if(respuesta=='s')
                    {
                        do
                        {
                        printf("Menu");
                        printf("1. Apellido");
                        printf("2. Nombre");
                        printf("3. Edad");
                        printf("4. Salir");
                        printf("Seleccione");
                        scanf("d",opcionM);

                        switch(opcionM)
                        {
                        case 1:
                            printf("Apellido: ");
                            fflush(stdin);
                            fgets(apellido[i]);
                            break;
                        }

                        }while(opcionM!=4);
                    }
                }
            }

        case 4://LISTADO
            for(i=0;i<CANT;i++)
            {
                for(j=0;j<CANT-1;j++)
                {
                    if(strcmp(apellido[i],apellido[j])>0)
                    {
                        //NOMBRE
                        strcpy(nombreAux,nombre[i]);//strcpy para cuando son cadenas
                        strcpy(nombre[i],nombre[j]);
                        strcpy(nombre [j],nombreAux);
                        //APELLIDO
                        strcpy(apellidoAux,apellido[i]);
                        strcpy(apellido[i],apellido[j]);
                        strcpy(apellido[j],apellidoAux);
                        //EDAD
                        strcpy(edadAux,edad[i]);
                        strcpy(edad[i],edad[j]);
                        strcpy(edad[j],edadAux);
                        //LEGAJO
                        strcpy(legajoAux,legajo[i]);
                        strcpy(legajo[i],legajo[j]);
                        strcpy(legajo[j],legajoAux);
                        //ISEMPTY
                        strcpy(isEmptyAux,isEmpty[i]);
                        strcpy(isEmpty[i],isEmpty[j]);
                        strcpy(isEmpty[j],isEmptyAux);

                    }
                    else
                    {
                        if(strcmp(apellido[i],apellido[j])==0)
                           {
                               if(strcmp(nombre[i],nombre[j]>0))
                                {
                                     //NOMBRE
                                    strcpy(nombreAux,nombre[i]);//strcpy para cuando son cadenas
                                    strcpy(nombre[i],nombre[j]);
                                    strcpy(nombre [j],nombreAux);

                                    //EDAD
                                    strcpy(edadAux,edad[i]);
                                    strcpy(edad[i],edad[j]);
                                    strcpy(edad[j],edadAux);
                                    //LEGAJO
                                    strcpy(legajoAux,legajo[i]);
                                    strcpy(legajo[i],legajo[j]);
                                    strcpy(legajo[j],legajoAux);
                                    //ISEMPTY
                                    strcpy(isEmptyAux,isEmpty[i]);
                                    strcpy(isEmpty[i],isEmpty[j]);
                                    strcpy(isEmpty[j],isEmptyAux);
                                }
                           }//si quisiera hacer otro criterio, hago un else aca y repito sin apellido y sin nombre
                    }
                }
            }
            printf("Legajo\tApellido\tNombre\tEdad\n\n");

            for(i=0;i<CANT;i++)
            {
                if(isEmpty[i]==0)
                {
                    printf("%d\t%s\t%s\t%d\n",legajo[i],apellido[i],nombre[i],edad[i]);
                }
            }
            break;


        case 5://SALIR
            printf("Hasta luego");

        default:
            printf("Opcion invalida");
        }
    }while(opcion!=5);

    return 0;
}

//funcion bajas
/*
int buscarInt(legajo[])
{
    printf("Legajo: ");
    scanf("%d",&legajo);

    for(i=0;i<CANT;legajo[i])
    {
        if(legajoAux==legajo[i])
        {
            isEmpty[i]=1;
            flag=1;
        }
    }
    return
}*/
