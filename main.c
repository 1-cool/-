#include <stdio.h>

int main()

{

int n;

scanf("%d", &n);

do

{

printf("%d", n % 10);

}while(n /= 10);

printf("\n");

return 0;

}
