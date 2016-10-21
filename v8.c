#include <stdio.h>

int main()
{
    float dolar,real=0,cot;
    
    printf("Diga a cotação do dólar:");
    scanf("%f",&cot);
    
    printf("Diga quantos dolares possui:");
    scanf("%f",&dolar);
    
    real = dolar*cot;
    
    printf("Voce possui %.2f reais.",real);
    
    return 0;
}