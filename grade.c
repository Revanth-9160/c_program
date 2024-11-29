#include<stdio.h>
int main()
{
int s1,s2,s3,s4,s5,avg,n;
printf("Enter Your Marks:");
scanf("%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5);
n=s1+s2+s3+s4+s5;
avg=n/5;
printf("Marks obtained in Maths: %d\n",s1);
printf("Marks obtained in Phy: %d\n",s2);
printf("Marks obtained in Chem: %d\n",s3);
printf("Marks obtained in English: %d\n",s4);
printf("Marks obtained in Sanskrit %d\n",s5);
printf("The Avg of the score obtained : %d\n",avg);
if (avg>80)
	printf("A GRADE\n");
else if (avg>=60 && avg<=80)
	printf("B GRADE\n");
else if (avg<=60 && avg>=40)
	printf("C GRADE\n");
else 
	printf("F GRADE\n");
}
