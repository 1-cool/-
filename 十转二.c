#include <stdio.h>

int main()

{

int n=0,i=0,x=0;

int a[32]={0};

scanf("%d", &n);

i=31;

do

{

a[i]=n % 2;

i--;

}while(n /= 2);

for(i=0;i<=31;i++)

{

	printf("%d",a[i]);}

}
