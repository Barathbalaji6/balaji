#include<stdio.h>
#include<conio.h>
void main()
{
int x,y,t;
clrscr();
scanf("%d%d",&x,&y);
printf("before swapping:%d%d",x,y);
t=x;
x=y;
y=t;
printf("After swapping:%d%d",x,y);
getch();
}
