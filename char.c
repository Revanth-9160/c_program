#include<stdio.h>
void main()
{
char ch;
printf("Enter any single Charcter or num or vowel: ");
scanf("%c",&ch);
if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch =='A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' )
	printf("You gained 5 points\n");
else if (ch>='0' && ch<='9')
	printf("You gained 10 points\n");
else
	printf("You gained nothing\n");
}
