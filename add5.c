#include<stdio.h>
int main()
{
	int m1,m2,m3,m4,m5,ADD,PER;
	printf("ENTER MARKS 1:");
	scanf("%d",&m1);
	printf("ENTER MARKS 2:");
	scanf("%d",&m2);
	printf("ENTER MARKS 3:");
	scanf("%d",&m3);
	printf("ENTER MARKS 4:");
	scanf("%d",&m4);
	printf("ENTER MARKS 5:");
	scanf("%d",&m5);
	
	ADD = m1+m2+m3+m4+m5;
	printf("THE TOTAL IS :%d",ADD);
	
	PER = ADD/5;
	printf("\nTHE PERCENTAGE IS :%d",PER);
	
	if(PER>75)
	{
		printf("\nDISTINCTION");
	}
	else if (PER>60)
	{
		printf("\nFIRST CLASS ");
	}
		else if (PER>50)
	{
		printf("\nSECOND CLASS ");
	}
		else if (PER>40)
	{
		printf("\nPASS CLASS ");
	}
	else
	{
		printf("\nFAIL!!");
	}
	
	
	return 0;
	
}