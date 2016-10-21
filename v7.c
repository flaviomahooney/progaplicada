#include <stdio.h>
int main()
{
    float cel,fah=0;
    
    printf("Diga a temperatura em celsius");
    scanf("%f",&cel);
    
    fah = ((9*cel)+160)/5;
    
    printf("%.1f graus celsius sao iguais a %.1f graus fahrenheint",cel,fah);
    
    return 0;
}