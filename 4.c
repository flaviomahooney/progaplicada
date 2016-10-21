/* Desenvolver um programa que efetue a leitura de 10 elementos inteiros para um vetor. No final, apresentar a soma de todos elementos cujo valor seja ímpar.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n[10],i,maior=0,cont=0,cont2=0;
    
    for(i=0;i<=9;i++)
    {
        printf("Diga um numero do vetor");
        scanf("%d",&n[i]);
    }
    
    for(i=0;i<=9;i++)
    {
       if((n[i]%2)==0) 
        {
            maior=n[i];
                if(cont<maior)
                    cont=maior;
        }
        if((n[i]%2)!=0)
            cont2++;
    }
        
        if(cont2==10)
        printf("Programa invalido");
        
        if(cont2<10)
        printf("%d",cont);
    
    return 0;    
}
