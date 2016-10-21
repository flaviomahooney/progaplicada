#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define max 3
int main()
{
    int n_voo[max], vagas_voo[max], i, op, op2, num, vag, chave=0, cont;
    char origem_voo[max][10], destino_voo[max][10], dest[10], orig[10];
    for(i=0;i<max;i++)
    {
        printf("entre com o numero do voo: ");
        scanf("%d", &n_voo[i]);
        fflush(stdin);
		printf("entre com a origem do voo %d: ", n_voo[i]);
        gets(origem_voo[i]);
        strupr(origem_voo[i]);
        fflush(stdin);
        printf("entre com o destino do voo %d: ", n_voo[i]);
        gets(destino_voo[i]);
        strupr(destino_voo[i]);
        fflush(stdin);
        do
        {
            printf("entre com a quantidade de vagas no voo %d: ", n_voo[i]);
            scanf("%d", &vagas_voo[i]);    
        }while(vagas_voo[i]<0);
    }
    do
    {
        printf("\n1 - consultar\n");
        printf("2 - efetuar reserva\n");
        printf("3 - sair\n");
        printf("Entre com uma das opções: ");
        scanf("%d", &op);
        if(op==1)
        {
            printf("\n1 - por numero de voo\n");
            printf("2 - por origem\n");
            printf("3 - por destino\n");
            printf("Entre com uma das opções: ");
            scanf("%d", &op2);
            if(op2==1)
            {
                printf("entre com o numero do voo: ");
                scanf("%d", &num);
                for(i=0;i<max;i++)
                {    
                    if(num==n_voo[i])
                    {
                        printf("\nOrigem: %s\n", origem_voo[i]);
                        printf("Destino: %s\n", destino_voo[i]);
                        printf("Vagas: %d\n", vagas_voo[i]);
                        chave = 1;
                        break;
                    }
                }
                if(chave==0)
                    printf("\nO numero do voo não existe\n");
                    
            }
            if(op2==2)
            {
                fflush(stdin);
                printf("entre com a origem do voo: ");
                gets(orig);
                strupr(orig);
                for(i=0;i<max;i++)
                {    
                    if(strcmp(orig,origem_voo[i])==0)
                    {
                        printf("\nNumero do voo: %d\n", n_voo[i]);
                        printf("Destino: %s\n", destino_voo[i]);
                        printf("Vagas: %d\n", vagas_voo[i]);
                        chave = 1;
                        break;
                    }
                }
                if(chave==0)
                    printf("\na origem do voo não existe\n");
            }
            if(op2==3)
            {
                fflush(stdin);
                printf("entre com o destino do voo: ");
                gets(dest);
                strupr(dest);
                for(i=0;i<max;i++)
                {    
                    if(strcmp(dest,destino_voo[i])==0)
                    {
                        printf("\nOrigem: %s\n", origem_voo[i]);
                        printf("numero do voo: %d\n", n_voo[i]);
                        printf("Vagas: %d\n", vagas_voo[i]);
                        chave = 1;
                        break;
                    }
                }
                if(chave==0)
                    printf("\nO destino do voo não existe\n");
            }
        }
        if(op==2)
        {
            printf("entre com o numero do voo: ");
            scanf("%d", &num);
        	for(i=0;i<max;i++)
        	{
        		if(num==n_voo[i]&&vagas_voo[i]>0)
        		{
        			printf("\nRESERVA CONFIRMADA!\n");
        			break;
				}
				else if(vagas_voo[i]==0)
				{
				    cont++;
		            printf("\nVÔO LOTADO!\n");
                    break;
				}
            }
            if(cont==0)
		    {
	             printf("\nVÔO INEXISTENTE!\n");
		         break;
            }
        }
    }while(op!=3);
    
}