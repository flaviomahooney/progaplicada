#include<stdio.h>
#include<stdlib.h>
#define t 5
int main()
{     int mat[t][t]={5,55,50,100,5,11,13,22,26,33,39,11,13,11,13,11,13,11,13,11,13,11,13,11,13}, i=0, j,c5=0,c11=0,c13=0,sai[t][t]={0},a,b,aux;
      /*for(i=0;i<t;i++)
      {  
         for(j=0;j<t;j++)
         {  do{
               printf("Elemento: ");
               scanf("%d",&mat[i][j]);
            } while(mat[i][j]%5!=0 && mat[i][j]%11!=0 && mat[i][j]%13!=0);
         }
      }*/
       a=0; 
      for(i=0;i<t;i++)
      {  
         for(j=0;j<t;j++)
         {  
		 	   if(mat[i][j]%5==0)
		 	   {
		 		   sai[a][a]=mat[i][j];
		 		   a++;
			   }
         }
      }
      a=0; b=1; aux=1;
   for(i=0;i<t;i++)
   {  
      for(j=0;j<t;j++)
      {  
		   if(mat[i][j]%11==0&&mat[i][j]%5!=0)
		   {
		 		if(a!=b)
            {
         		sai[a][b]=mat[i][j];
					b++; 
               if (b==t){ a++; b=++aux;}
				}
		 	}                 
      }
   } 
   a=1;  b=0;
   for(i=0;i<t;i++)
   {  
      for(j=0;j<t;j++)
      {  
		 	if(mat[i][j]%13==0&&mat[i][j]%5!=0&&mat[i][j]%11!=0)
            if(b!=a)
            {
         		sai[a][b]=mat[i][j];
					b++; 
			   	if (b==a)
			   	{ 
					   a++; 
						b=0;
			   	}
			   }         
      }
   }  
   for(i=0;i<t;i++)
   {  printf("\n");
      for(j=0;j<t;j++)
         printf("%5d",sai[i][j]); 
   }   
    return 0;
}