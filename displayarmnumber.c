#include<stdio.h>
#include<conio.h>
int arm(int x)
{
int b,c,d=0,e;
e=x;
while(x!=0)
{
b=a%10;
c=b*b*b;
d=d+c;
x/=10;
}
if(d==e)
printf("%d\n",e);
return 0;
}
void main()
{
int x,b;
clrscr();
scanf("%d %d",&x,&b);
x++;
while(x!=b)
{
arm(x);
x++;
}
getch();
}
