#include <stdio.h>

int main()
{
    int i,num,cont;
    
    for(i=0;i<80;i++)
    {
        printf("Numero");
        scanf("%d",&num);
    }
    
    for(i=0;i<80;i++)
    {
        if(num>=10 && num<=150)
        cont++;
    }
    
    printf("A quantidade de repeticoes é de %d.",cont);
    
    return 0;
}