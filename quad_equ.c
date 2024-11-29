#include<stdio.h>
void main()
{
int a,b,c,dis;
printf("Enter Co-efficient 1:");
scanf("%d",&a);
printf("Enter Co-efficient 2:");
scanf("%d",&b);
printf("Enter Co-efficient 3:");
scanf("%d",&c);
dis =b*b-(4*a*c);
if (dis > 0)
	printf("It is Real roots and Earned 20 points\n");
else if (dis < 0)
	printf("It is Imaginary Root and Earned 10 points\n");
else
	printf("It is Equal Roots and Earned Zero(0) points\n");	
}
