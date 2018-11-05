#include<stdio.h>
int main()
{
	int *A,*B;	int a,b,yu;
	scanf("%d%d",&a,&b);
	do
	{
		if(a>=b)
		{
			A=&a;
			B=&b;
		}
		else
		{
			A=&b;
			B=&a;
		}
		yu=(*A)%(*B);
		a=*B;
		b=yu;
	}while(yu!=0);
	printf("最大公约数为%d\n",a);
	getch();
	return 0;
}
