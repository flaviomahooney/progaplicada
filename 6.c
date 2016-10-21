/*Considere uma matriz de 10 linhas e 3 colunas cada linha esta associada a 1 aluno e as colunas estao associadas as notas de provas
referentes a aqueles estudantes. Faça um programa que leia as notas de cada aluno, e mostre a media de cada estudante e media
da turma em cada prova.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int not[10][3],i,j,ne[10],me[10];
    
    for(i=0;i<10;i++)
        for(j=0;j<3;j++)
        {
            printf("Diga a av %d do aluno %d",j+1,i+1);
            scanf("%d",&not[i][j]);
        }
    
     for(i=0;i<10;i++)
        for(j=0;j<3;j++)
        {
            me[i] += not[i][j];
        }
        
        for(i=0;i<10;i++)
         printf("%d",me[i]);
    
    
    
    
    
    system("pause");
    return 0;   
}