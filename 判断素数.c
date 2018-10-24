#include<stdio.h>
int main()
{
  int i,m;
  scanf("%d",&m);
for (i=2;i<=m-1;i++)
{
if(m%i==0)
{
printf("不是素数\n");
break;
}
}
if(i==m)
printf("是素数\n");
}
