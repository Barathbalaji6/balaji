#include<stdio.h>
int main()
{
int start,end,n,flag=0,x;
printf("enter the starting and ending interval");
scanf("%d%d",&start,&end);
for(n=start;n<=end;n++)
{
  for(x=2;x<n;x++)
{
if(n%x==0)
{
flag=1;
}
}
if(flag==0)
printf("%d",&n);
}

printf("the above is the prime number series");
return 0;
}
