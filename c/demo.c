#include<stdio.h>
main()
{
	
	//program to do simple calculations
	
	int a,b;
	float ans;
	
	printf("\nENTER a value:");
	scanf("%f,&a");
	printf("\nENTER b value");
	scanf("%f,&b");
	
	ans = a+b;
	printf("\nAddition of A & B = %f",ans);
	
	ans = a-b;
	printf("\nSubtraction of A & B = %f", ans);
	
	ans = a*b;
	printf("\nMultiplication of A & B = %f",ans);
	
	ans = a%b;
	printf("\nRemainder of A & B =%f", ans);
	
	ans = (float)a/(float)b;
	printf("\nDivision of A & B = %f", ans);
		
}