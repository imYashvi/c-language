#include<stdio.h>
main()
{
	//program of nested if
	
	int a,b,c;
	printf("ENTER A:");
	scanf("%d",&a);
	printf("ENTER B:");
	scanf("%d",&b);
	printf("ENTER C:");
	scanf("%d",&c);
	
	
	if(a>b)
	{
		if(a>c)
		printf("A IS THE GREATEST.");
	
	}
	else
	{
		printf("C IS THE GREATEST.");
	}
}
	else
	{
		if(b>c)
		{
			printf("B IS THE GREATEST.");
		}
		else
		{
			printf("C IS THE GREATEST.");
		}
	
}