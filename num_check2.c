#include<stdio.h>
int main()
{
int num;
printf("Enter a number:\t");
scanf("%d",&num);
if (num>0)
	printf("The Entered Number is Positive\n");
if (num<0)
	printf("The Entered Number is Negative\n");
if (num==0)
	printf("The Entered Number is Zero\n");
}
