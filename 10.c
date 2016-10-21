#include <stdio.h>
int main()
{
    float pre,parc=0;
    
    printf("Diga qual foi o preço pago:");
    scanf("%f",&pre);
    
    parc = pre/5;
    
    printf("O valor das parcelas é de %.1f",parc);
    
    return 0;
}