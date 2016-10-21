/*2- Uma escola deseja controlar as médias das disciplinas que seus alunos cursam. Sabem-se que nessa escola, existem três turmas, com oito alunos cada, e cada aluno cursa quatro disciplinas. Crie um programa que armazena essas médias em uma matriz 3 x 8 x 4. Depois da leitura, ele irá calcular e mostrar as seguintes informações:
a)A média geral de cada aluno;

b)A média de cada turma;*/

#include <stdio.h>

int main()
{
    float mat[3][8][4],m_alu[24]={0},m_turma[3]={0};
    int i,j,k,x=0,z=0;
    
    
    for(i=0;i<3;i++)
    {
        z++;
        for(j=0;j<8;j++)
        {
        x++;
            for(k=0;k<4;k++)
                {
                    printf("Digite a prova da turma %d, do aluno %d e da disciplica %d",i+1,j+1,k+1);
                    scanf("%f",&mat[i][j][k]);
                    m_alu[x] += mat[i][j][k];
                }
        m_alu[x] = m_alu[x]/4;
        m_turma[z] += m_alu[x];
        printf("Aluno %d turma %d  Media %.1f\n",j+1,i+1,m_alu[x]);
        }
        m_turma[z] = m_turma[z]/8;
        printf("Media turma %d é %.1f\n",i+1,m_turma[z]);
    }
    
    return 0;
}
