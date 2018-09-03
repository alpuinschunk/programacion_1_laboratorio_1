#include <stdio.h>
#include <stdlib.h>

int factorial(int n);
int main()
{
    int x;
    x=factorial(5);

    printf("%d",x);
    return 0;
}

int facorial (int n)
{
    int fact;

    if(n==1)
    {
        fact=1;
    }
    else
    {
        fact=facorial(n-1);
    }
    return fact;
}
