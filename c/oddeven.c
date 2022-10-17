#include<stdio.h>
int main()
{
	
	//program to check whether a number is even or odd
	
	int number;
	printf("ENTER A NUMBER:");
	scanf("%d",&number);

if (number%2 == 0)

	printf("%d is an even number",number);

else
 
    printf("%d is a odd number",number);

return 0;
}