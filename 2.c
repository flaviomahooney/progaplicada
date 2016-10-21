#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[2],b[2],c[4],i,aux=0;
    
    for(i=0;i<2;i++)
    {
        printf("Diga o numero do vetor a[%d]",i);
        scanf("%d",&a[i]);
        printf("Diga o numero do vetor b[%d]",i);
        scanf("%d",&b[i]);
    }
    
    for(i=0;i<4;i++)
    {
        c[aux] = a[i];
        aux++;
        c[aux] = b[i];
        aux++;
    }
    
    for(i=0;i<4;i++)
    {
        printf("C[%d] = %d\n",i,c[i]);
    }
    
    return 0;
}