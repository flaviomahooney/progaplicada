/*45. Faça um programa que leia um número não determinado de pares de valores [m,n], todos inteiros e
positivos, um par de cada vez, e que calcule e mostre a soma de todos os números inteiros entre m e n
(inclusive). A digitação de pares terminará quando m for maior ou igual a n.*/

#include <stdio.h>
#define tam 5
int main()
{
    int n[tam],m[tam],i,aux1=0,aux2=0;
    
    do{
        
        for(i=0;i<tam;i++)
        {
            printf("Diga o numero do vetor n:");
            scanf("%d",&n[i]);
            printf("Diga o numero do vetor m:");
            scanf("%d",&m[i]);
            
            aux1 = aux1 + n[i];
            aux2 = aux2 + m[i];
            
            if(aux2 > aux1)
            {
                printf("A soma de m é maior que a soma de n");
                break;
            }
            
        }
        
        
    }while(n[i]<0 && m[i]<0);

    return 0;
}