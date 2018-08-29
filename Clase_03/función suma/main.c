#include <stdio.h>
#include <stdlib.h>

int suma(int/*op1*/,int/*op2*/);//prototipo o declaracion. firma
int main()
{
    int nro1, nro2, result;
    printf("Ingrese el primer operando");
    scanf("%d",&nro1);
    printf("Ingrese el segundo operando");
    scanf("%d",&nro2);

    result=suma(nro1,nro2);//llamo a la función
    system("cls");
    printf("Resultado: %d", result);
    return 0;
}//no da error ya que la firma esta al pricipio del algoritmo

int suma(int op1,int op2)
{
    int resultado;
    resultado= op1+op2;
    return resultado;
}
