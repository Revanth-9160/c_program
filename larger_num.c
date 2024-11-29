#include<stdio.h>
int main()
{
int a,b,c;
printf("Enter any Number:");
scanf("%d%d%d",&a,&b,&c);
if (a>=b && a>=c)
	printf("The largest Number is %d\n",a);
else if (b>=a && b>=c)
	printf("The largest Number is %d\n",b);
else
	printf("The largest Number is %d\n",c);
}
