#include<stdio.h>
void main()
{
char input;
printf("Enter any charcter:");
scanf("%c",&input);
if (input >='a' && input <='z')
	printf("It is an  lower case letter\n");
else if (input >='A' && input <='Z')
	printf("It is an Upper-Case letter\n");
else 
	printf("Check your Input\n ");
}
