#include<stdio.h>
int main()
{
	
	//program to check whether the number is even or odd done by me 
	
	int x;
	printf("enter a number:");
	scanf("%d", &x);
	
	if(x %2 == 0)
	{
		printf("%d is an even number.",x);
		
	}
	
	else
	{
		printf("%d is an odd number.",x);
	}
	
	return 0;
}