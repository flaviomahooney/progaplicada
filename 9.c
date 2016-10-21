#include <stdio.h>

int main()
{
    int i,mes;
    float val;
    
    printf("Diga quanto foi o valor depositado");
    scanf("%f",&val);
    
    printf("Diga quantos meses o investimento permaneceu ou permanecera");
    scanf("%d",&mes);
    
    for(i=0;i<mes;i++)
    {
        val+=((val*0.7)/100);
    }
    
    printf("O valor final do investimento sera %.2f.",val)
    
    return 0;
}