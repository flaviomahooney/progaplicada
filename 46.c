/*46.Um pequena loja de artesanato possui um vendedor e comercializa dez tipos de objetos. O vendedor
receve, mensalmente, salário de R$ 400,00, acrescido de 5% do valor total de suas vendas. O valor unitário
dos objetos deve ser informado e armazenado em um vetor, a quantidade vendida de cada peça deve ficar
em outro vetor, mas na mesma posição. Crie um programa que receba os preços e as quantidades vendidas,
armazenando-os em seus respectivos vetores (ambos com tamanho dez). Depois, determine e mostre:

- um relatório contendo quantidade vendida, valor unitário e valor total de cada objeto. Ao final, deverá ser
mostrado o valor geral das vendas e o valor da comissão que será paga ao vendedor;

- o valor do objeto mais vendido e sua posição no vetor (não se preocupe com empates)*/
#include <stdio.h>

int main()
{
    float sal=400,v_uni[10],v_total[10],comiss=0,cont=0;
    int i,quant_v[10],mais=-1;
    
    for(i=0;i<10;i++)
    {
        printf("Diga o valor unitário do objeto %d",i+1);
        scanf("%f",&v_uni[i]);
    }
    
    for(i=0;i<10;i++)
    {
        printf("Diga a quatidade vendida do objeto %d",i+1);
        scanf("%d",&quant_v[i]);
        if(quant_v[i]>mais)
        {
            mais = quant_v[i];
        }
    }
    
    for(i=0;i<10;i++)
    {
        v_total[i] = quant_v[i] * v_uni[i];
        cont += v_total[i];
    }
    
    comiss = (cont*5)/100;
    
    printf("RELATÓRIO\n");
    printf("______________\n");
    printf("Quantidade vendida\n");
    for(i=0;i<10;i++)
    {
        printf("Objeto %d-%d\n",i+1,quant_v[i]);
    }
    
    printf("Valor Unitário\n");
    for(i=0;i<10;i++)
    {
        printf("Valor U.O. %d-%.1f\n",i+1,v_uni[i]);
    }
    
    printf("Valor total p/obj.\n");
    for(i=0;i<10;i++)
    {
        printf("Valor total obj. %d-%.1f\n",i+1,v_total[i]);
    }
    
    printf("Valor Geral das vendar é de %.1f\n",cont);
    printf("A comissão que será paga ao vendedor é de %.f1\n",comiss);
    printf("O valor do objeto que teve maior venda foi de %d\n",mais);
    
    return 0;
}