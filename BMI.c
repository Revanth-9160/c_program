#include<stdio.h>
void main()
{
float x,c,z,bmi,y;
printf("Enter the Weight of the user:");
scanf("%f",&x);
printf("Enter the Height of a person in cm:");
scanf("%f",&c);
y=c/100;
z=y*y;
bmi=x/z;
if (bmi < 18.5 && bmi > 0)
	printf("The person is Under-Weight\n");
else if (bmi >=18.5 && bmi <=24.9)
	printf("The person is Normal Weight\n");
else 
	printf("The Person is over weight\n");
}
