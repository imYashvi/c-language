#include<stdio.h>
main()
{
	int i=1;
	
	while(i<=100)
	{
		printf("\nI = %d",i);
		i++;
	}
	
	
	do
	{
		printf("\nI = %d",i);
		i++;
	}while(i,i<=100);
	
	
	
	for(i=1 ; i<=100 ; i++)
		{
		printf("\nI = %d",i);
	}
}