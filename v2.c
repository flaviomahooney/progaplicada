#include <stdio.h>

int main()
{
    int n,num,som=0,sub=0,mult=0;
    float divi=0;
    
    printf("Diga o primeiro termo da soma:\n");
    scanf("%d",&n);
    printf("Diga o segundo termo da soma:\n");
    scanf("%d",&num);
    
    som = n+num;
    sub = n-num;
    mult = n*num;
    divi = n/num;
    
    printf("A soma dos numero é de %d\n",som);
    printf("A divisao dos numero é de %.1f\n",divi);
    printf("A multiplição dos numero é de %d\n",mult);
    printf("A subtação dos numero é de %d\n",sub);
    
    return 0;
}