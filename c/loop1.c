#include<stdio.h>
main()
{
	int i;
	printf("\nENTER A NUMBER:");
	scanf("%d",&i);
	while(i!=0)
	{
		printf("\nI = %d",i);
		printf("\nENTER A NUMBER:");
		scanf("%d",&i);
		
		
	}
	printf("\nYOU ENTERED ZERO.");
	
	do
	{
		printf("\nENTER A NUMBER:");
		scanf("%d",&i);	
			printf("\nI = %d",i);
	}while
	{
		printf("\nYOU ENTERED ZERO.");	
	}
}