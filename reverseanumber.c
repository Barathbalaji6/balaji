#include<stdio.h>
#include<string.h>
int main()
{
int a,y,m,i;
printf("Insert any two number: ");
scanf("%d%d",&a,&y);
    if(a>y)
         m=y;
    else
         m=a;

    for(i=m;i>=1;i--){
         if(a%i==0&&y%i==0){
             printf("\nHCF of two number is : %d",i);
             break;
         }
    }

system("pause");    
}
