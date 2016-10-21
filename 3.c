#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num[9],i,res;
    
    for(i=1;i<=10;i++)
    {
        printf("Numero:\n");
        scanf("%d",&num[i]);
    }
    
    for(i=1;i<=10;i++)
    {
        res = (num[i] * i);
        printf("%d  x  %d  = %d\n",i,num[i],res);
    }
    
    return 0;
}