#include<stdio.h>
int main()

{
	
	//program to calculate the area of a circle
	int r;
	float area;
	
	printf("\nRadius of Circle:");
    scanf("%d", &r);
    
    area=3.14*r*r;
    
    printf("\nArea of Circle = %f",area); 
    
    return 0;
}