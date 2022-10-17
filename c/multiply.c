#include<stdio.h>
int main()
{
	//program to calculate area of rectangle, triangle and circle
	int a,b,r;
	float area; 
	printf("PROGRAM TO CALCULATE AREA OF A RECTANGLE,TRIANGLE AND CIRCLE.\n");
	
	printf("ENTER A VALUE FOR HEIGHT:\n");
	scanf("%d",&a);
	printf("ENTER A VALUE FOR BREADTH:\n");
	scanf("%d",&b);
	printf("ENTER A VALUE OF RADIUS:\n");
	scanf("%d",&r);
	
	area = a*b;
	printf("THE AREA OF THE RECTANGLE IS:%f\n",area);
	
	area = 0.5*a*b;
	printf("THE AREA OF TRIANGLE IS :%f\n",area);
	

	area = 3.14*r*r;
	printf("THE AREA OF CIRCLE IS:%f\n",area);
	
	return 0;
}