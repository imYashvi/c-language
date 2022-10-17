#include<stdio.h>
main()
{
	int a,b,ans;
	char n;
    
	printf("ENTER A:");
	scanf("%d",&a);
	
	printf("ENTER B:");
	scanf("%d",&b);
	
	printf("\nSELECT THE OPERATION TO PERFORM:");
	printf("\na.ADDITION \nb.SUBTRACTION \nc.MULTIPLICATION \nd.DIVISION");
	fflush(stdin);
	scanf("%c",&n);
	
	switch(n)
	{
		case 'a':
		printf("\nADDITION =%d",a+b);
		break;
		case 'b':
		printf("\nSUBTRACTION =%d",a-b);
			break;
		case 'c':
		printf("\nMULTIPLICATION =%d",a*b);
			break;
		case 'd':
		printf("\nDIVISION =%d",a/b);
			break;
		default:
			printf("invalid input");
	}
	
	
}