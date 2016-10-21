/*Faça um programa que monte uma matriz 4x4 e depois multiplique a diagonal secundaria pelo maior elemento da matriz. 
E depois mostre a matriz resultante*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int mat[4][4],i,j,maior=0,ds[4],cont=0;
    
    for(i=0;i<4;i++)
         for(j=0;j<4;j++)
               {
                    printf("Diga a linha %d da coluna %d",i+1,j+1);
                    scanf("%d",&mat[i][j]);
               }
               maior = mat[0][0];
              for(i=0;i<4;i++)
                  for(j=0;j<4;j++)
                  {
                      if(mat[i][j]>maior)
                      maior = mat[i][j];
                  }
               
               
    for(i=0;i<4;i++)
         for(j=0;j<4;j++)
         {
             if((i+j)== 3)
             ds[i]= mat[i][j];
         }
         
         for(i=0;i<4;i++)
              cont+=ds[i];
              
              maior = maior * cont;
              
              printf("A soma da diagonal secundaria é %d ",cont);
              printf("A soma da diagonal secundaria com o maior é %d",maior);
    
    system("pause");
    return 0;
}
