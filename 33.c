#include <stdio.h>

int main()
{
    int idade,i;
    
    for(i=0;i<75;i++)
    {
        printf("Diga a idade");
        scanf("%d",&idade);
        
        if(idade>=18)
        printf("Maior de idade");
        if(idade<18)
        printf("Menor idade");
    }
    
    return 0;
}