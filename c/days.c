#include<stdio.h>
int main()
{
	
	
	//program to convert year into days 
	
    float a, ans;
    printf("PROGRAM TO CONVERT DAYS INTO YEAR AND YEAR INTO DAYS.\n\n\n");
    
    printf("ENTER THE VALUE TO BE CONVERTED:\n\n\n");
    scanf("%f",&a);
    
    ans = a*365;
        
    printf("NUMBER OF DAYS ARE:%f\n\n\n",ans);
  
    ans = a/365; 
	
	printf("NUMBER OF YEARs ARE:%f\n\n\n",ans);
	 
    return 0;
}