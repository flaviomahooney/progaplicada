#include <stdio.h>

int main()
{
    float c_medio,km,comb;
    
    printf("Diga quantos quilometros foram percorridos?");
    scanf("%f",&km);
    
    printf("Quantos litros de combustiveis foram gastos? ");
    scanf("%f",&comb);
    
    c_medio = km / comb;
    
    printf(" Em 1 hora se consoma %.2f litros de combustivel",c_medio);
    
    
    return 0;
}