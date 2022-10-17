#include<stdio.h>
int main()
{
	//program to calculate simple interest 
	
	float p,r,t,simpleint;
	printf("ENTER THE VALUES TO CALCULATE SIMPLE INTEREST.\n");
	
	printf("ENTER P:\n");
	scanf("%f",&p);
	
	printf("ENTER R:\n");
	scanf("%f",&r);
	
	printf("ENTER T:\n");
	scanf("%f",&t);
	
	simpleint = p*r*t/100;
	
	printf("THE CALCULATED SIMPLE INTEREST IS:%f",simpleint);
	
	return 0;
	
}