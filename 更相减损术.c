#include<stdio.h>
#include<math.h>
int main()
{
	int *A,*B;	int a,b,cha,i=0;
	scanf("%d%d",&a,&b);
	while(a%2==0 && b%2==0)
	{
		a=a/2;
		b=b/2;
		i=i++;
	}
	while(a!=b)
	{
		if(a>b)
		{
			A=&a;
			B=&b;
		}
		else
		{
			A=&b;
			B=&a;
		}
		cha=*A - *B;
		a=*B;
		b=cha;
	}
	cha=cha*pow(2,i);
	printf("最大公约数为%d\n",cha);
	getch();
	return 0;
}
