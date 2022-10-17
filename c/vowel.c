#include<stdio.h>
main()
{
	//program to calculate vowel and consonant 
	
	char ch;
	printf("ENTER A CHARACATER:\n");
	scanf("%c",&ch);
	
	if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
	printf("%c is a VOWEL.",ch);
	
	else
	printf("%c is NOT A VOWEL BUT A CONSONANT.",ch);

return 0;
}