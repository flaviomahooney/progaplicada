#include <stdio.h>

int main()
{
    int n,num,total=0;
    
    printf("Diga o primeiro termo da soma:\n");
    scanf("%d",&n);
    printf("Diga o segundo termo da soma:\n");
    scanf("%d",&num);
    
    total = n + num;
    
    printf("O total da soma é de %d",total);

    return 0;
}