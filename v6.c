#include <stdio.h>
int main()
{
	int a,b,aux=0;
	
	printf("Diga o primeiro numero:");
	scanf("%d",&a);
	
	printf("Diga o segundo numero");
	scanf("%d",&b);
	
	aux=a;
	a=b;
	b=aux;
	
	printf(" O valor trocado de a é: %d\n",a);
	printf(" O valor trocado de b é: %d",b);
	
	return 0;
}