#include<stdio.h>
main()
{
	int n,i;
	printf("\nENTER A NUMBER:");
	scanf("%d",&n);
	
	for(i=1;i<=10;i++ )
	{
		printf("\n%d * %d = %d",n,i,n*i);
	}
}