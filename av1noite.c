/*Crie um programa que:
* receba o preço de dez produtos e armazene-os em um vetor
* receba a quantidade estocada de cada um desses produtos em cinco armazéns diferentes, utilizando uma matriz 5x10
O programa deverá calcular e mostar
* a quantidade de produtos estocados em cada um dos armazéns
* a quantidade de cada um dos produtos estocados em todos os armazéns juntos
* o preço do produto que possui maior estoque em um único armazém
* o menor estoque armazenado
* o custo de cada armazém*/
#define tam 10
#define tam2 5
#include <stdio.h>
int main()
{
    float preco[tam], custo[tam2]={0} ;
    int quant_stocada[tam2][tam], quant_da_linha[tam2]={0}, quant_da_coluna[tam]={0}, aux, menor_stoque=99999, maior_stoque = -99999, i=0, j=0;
    for(i=0;i<tam;i++)
    {
        do
        {
            printf("entre com o preço do %dº produto: ", i+1);
            scanf("%f", &preco[i]);
        }while(preco[i]<=0.0);
    }
    for(i=0;i<tam2;i++)
    {
        for(j=0;j<tam;j++)
        {
            do
            {
                
                printf("entre com a quantidade do %dº produto no %dº armazem: ", j+1, i+1);
                scanf("%d", &quant_stocada[i][j]);
                if(quant_stocada[i][j]>=0)
                {
                    quant_da_linha[i] += quant_stocada[i][j];
                    quant_da_coluna[j] += quant_stocada[i][j];
                    if(quant_stocada[i][j]>maior_stoque)
                    {
                        maior_stoque=quant_stocada[i][j];
                        aux = j;
                    }
                    custo[i] += preco[j]*(float)quant_stocada[i][j];   
                }
            }while(quant_stocada[i][j]<0);
        }
    }
    for(i=0;i<tam;i++)
        if(quant_da_coluna[i]<menor_stoque)
                menor_stoque=quant_da_coluna[i];
    
    printf("1 - A quantidade de produtos estocados em cada um dos armazéns:\n\n");
    for(i=0;i<tam2;i++)
        printf("Quantidade de produtos no armazem %d : %d\n", i+1, quant_da_linha[i]);
    printf("------------------------------------------------------------------------------------\n");
    printf("2 - A quantidade de cada um dos produtos estocados em todos os armazéns juntos:\n\n");
    for(i=0;i<tam;i++)
        printf("Quantidade do produtos %d em todos os armazens: %d\n", i+1, quant_da_coluna[i]);
    printf("------------------------------------------------------------------------------------\n");
    printf("3 - O preço do produto que possui maior estoque em um único armazém:\n\n R$ %.2f\n", preco[aux]);
    printf("------------------------------------------------------------------------------------\n");
    printf("4 - O menor estoque armazenado:\n\n %d produtos\n", menor_stoque);
    printf("------------------------------------------------------------------------------------\n");
    printf("5 - O custo de cada armazém: \n\n");
        for(i=0;i<tam2;i++)
            printf("O custo do armazem %d: R$ %.2f\n", i+1, custo[i]);
    printf("------------------------------------------------------------------------------------\n");
    return 0;    
}
